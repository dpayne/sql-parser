
import math

sqlKeywordsFile = "sql_keywords.txt"
flexTemplateFile =  "flex_lexer_template.l"
flexOutputFile =  "flex_lexer.l"
bisonTemplateFile = "bison_parser_template.y"
bisonOutputFile = "bison_parser.y"

with open(sqlKeywordsFile, 'r') as fh:
	keywords = [line.strip() for line in fh.readlines() if not line.strip().startswith("//") and len(line.strip()) > 0]

	keywords = sorted(set(keywords)) # Sort by name
	keywords = sorted(keywords, key=lambda x: len(x), reverse=True) # Sort by length

	#################
	# Flex

	max_len = len(max(keywords, key=lambda x: len(x))) + 1
	max_len = 4 * int(math.ceil(max_len / 4.0))

	tokens=""
	for keyword in keywords:
		len_diff = (max_len) - len(keyword)
		num_tabs = int(math.floor(len_diff / 4.0))

		if len_diff % 4 != 0: num_tabs += 1

		tabs = ''.join(['\t' for _ in range(num_tabs)])
		tokens+=keyword
		tokens+=tabs
		tokens+="TOKEN("
		tokens+=keyword
		tokens+=")\n"
	
	with open(flexTemplateFile, "rt") as fin:
		with open(flexOutputFile, "wt") as fout:
			for line in fin:
				fout.write(line.replace('TEMPLATE_TOKEN_REPLACEMENT', "*/\n" + tokens + "\n /*"))
	#
	#################


	#################
	# Bison
	line = "%token"
	max_len = 60

	sqlKeywords = "/* SQL Keywords */\n"
	for keyword in keywords:
		if len(line + " " + keyword) > max_len:
			sqlKeywords += line
			line = "\n%token " + keyword
		else:
			line = line + " " + keyword
	sqlKeywords += line
	
	with open(bisonTemplateFile, "rt") as fin:
		with open(bisonOutputFile, "wt") as fout:
			for line in fin:
				fout.write(line.replace('SQL_KEYWORDS_REPLACEMENT', "*/\n" + sqlKeywords + "\n /*"))

	#
	#################
