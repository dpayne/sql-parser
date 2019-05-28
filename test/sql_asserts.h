#ifndef __HELPER_H__
#define __HELPER_H__


#define TEST_PARSE_SQL_QUERY(query, result, numStatements) \
	hsql::SQLParserResult result; \
	hsql::SQLParser::parse(query, &result); \
	ASSERT(result.isValid()); \
	ASSERT_EQ(result.size(), numStatements);

#define TEST_PARSE_SQL_QUERY_WITH_PRINT_ERROR(query, result, numStatements) \
	hsql::SQLParserResult result; \
	hsql::SQLParser::parse(query, &result); \
	if (!result.isValid()) { printf("\033[31;1m%s L(%d:%d)\033[0m\n", result.errorMsg(), result.errorLine(), result.errorColumn()); } \
	ASSERT(result.isValid()); \
	ASSERT_EQ(result.size(), numStatements);


#define TEST_PARSE_SINGLE_SQL(query, stmtType, stmtClass, result, outputVar) \
	TEST_PARSE_SQL_QUERY(query, result, 1); \
    ASSERT_EQ(result.getStatement(0)->type(), stmtType); \
    const stmtClass* outputVar = (const stmtClass*) result.getStatement(0);

#define TEST_PARSE_SINGLE_SQL_WITH_PRINT_ERROR(query, stmtType, stmtClass, result, outputVar) \
	TEST_PARSE_SQL_QUERY_WITH_PRINT_ERROR(query, result, 1); \
    ASSERT_EQ(result.getStatement(0)->type(), stmtType); \
    const stmtClass* outputVar = (const stmtClass*) result.getStatement(0);


#define TEST_CAST_STMT(result, stmt_index, stmtType, stmtClass, outputVar) \
    ASSERT_EQ(result.getStatement(stmt_index)->type(), stmtType); \
    const stmtClass* outputVar = (const stmtClass*) result.getStatement(stmt_index);


#endif
