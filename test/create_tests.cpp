

#include "SQLParser.h"
#include "sql_asserts.h"
#include "thirdparty/microtest/microtest.h"

using namespace hsql;

TEST(CreateTest) {
  TEST_PARSE_SINGLE_SQL("CREATE TABLE test (v1 INTEGER);", kStmtCreate,
                        CreateStatement, result, stmt);

  ASSERT_EQ(1, stmt->columns->size());
  ASSERT_TRUE(hsql::DataType::INT == stmt->columns->at(0)->type.data_type);
  ASSERT_FALSE(stmt->columns->at(0)->nullable);
  ASSERT_NULL(stmt->columns->at(0)->encoding);
  ASSERT_NULL(stmt->columns->at(0)->defaultExpr);
}

TEST(CreateTestDefaultInt) {
  TEST_PARSE_SINGLE_SQL("CREATE TABLE test (v1 INTEGER DEFAULT(10), v2 "
                        "INTEGER, v3 INTEGER NULL);",
                        kStmtCreate, CreateStatement, result, stmt);

  ASSERT_EQ(3, stmt->columns->size());

  ASSERT_TRUE(hsql::DataType::INT == stmt->columns->at(0)->type.data_type);
  ASSERT_FALSE(stmt->columns->at(0)->nullable);
  ASSERT_NULL(stmt->columns->at(0)->encoding);
  ASSERT_NOTNULL(stmt->columns->at(0)->defaultExpr);
  ASSERT_TRUE(stmt->columns->at(0)->defaultExpr->type == kExprLiteralInt);
  ASSERT_EQ(10, stmt->columns->at(0)->defaultExpr->ival);
}

TEST(CreateTestDefaultString) {
  TEST_PARSE_SINGLE_SQL(
      "CREATE TABLE test (v1 VARCHAR(255) DEFAULT('hello world'));",
      kStmtCreate, CreateStatement, result, stmt);

  ASSERT_EQ(1, stmt->columns->size());

  ASSERT_TRUE(hsql::DataType::VARCHAR == stmt->columns->at(0)->type.data_type);
  ASSERT_FALSE(stmt->columns->at(0)->nullable);
  ASSERT_NULL(stmt->columns->at(0)->encoding);
  ASSERT_NOTNULL(stmt->columns->at(0)->defaultExpr);
  ASSERT_TRUE(stmt->columns->at(0)->defaultExpr->type == kExprLiteralString);
  ASSERT_EQ(std::string("hello world"),
            std::string(stmt->columns->at(0)->defaultExpr->name));
}

TEST(CreateTestNullable) {
  TEST_PARSE_SINGLE_SQL("CREATE TABLE test (v1 INTEGER NULL);", kStmtCreate,
                        CreateStatement, result, stmt);

  ASSERT_EQ(1, stmt->columns->size());

  ASSERT_TRUE(hsql::DataType::INT == stmt->columns->at(0)->type.data_type);
  ASSERT_TRUE(stmt->columns->at(0)->nullable);
  ASSERT_NULL(stmt->columns->at(0)->encoding);
  ASSERT_NULL(stmt->columns->at(0)->defaultExpr);
}

TEST(CreateTestNotNullable) {
  TEST_PARSE_SINGLE_SQL_WITH_PRINT_ERROR(
      "CREATE TABLE test (v1 INTEGER NOT NULL);", kStmtCreate, CreateStatement,
      result, stmt);

  ASSERT_EQ(1, stmt->columns->size());

  ASSERT_TRUE(hsql::DataType::INT == stmt->columns->at(0)->type.data_type);
  ASSERT_FALSE(stmt->columns->at(0)->nullable);
  ASSERT_NULL(stmt->columns->at(0)->encoding);
  ASSERT_NULL(stmt->columns->at(0)->defaultExpr);
}

TEST(CreateTestEncodingDict) {
  TEST_PARSE_SINGLE_SQL_WITH_PRINT_ERROR(
      "CREATE TABLE test (v1 INTEGER ENCODING DICT);", kStmtCreate,
      CreateStatement, result, stmt);

  ASSERT_EQ(1, stmt->columns->size());

  ASSERT_TRUE(hsql::DataType::INT == stmt->columns->at(0)->type.data_type);
  ASSERT_FALSE(stmt->columns->at(0)->nullable);
  ASSERT_EQ(std::string{"DICT"}, stmt->columns->at(0)->encoding->encoding);
  ASSERT_NULL(stmt->columns->at(0)->defaultExpr);
}

TEST(CreateTestEncodingDictWithArg) {
  TEST_PARSE_SINGLE_SQL_WITH_PRINT_ERROR(
      "CREATE TABLE test (v1 INTEGER ENCODING DICT(arg1));", kStmtCreate,
      CreateStatement, result, stmt);

  ASSERT_EQ(1, stmt->columns->size());

  ASSERT_TRUE(hsql::DataType::INT == stmt->columns->at(0)->type.data_type);
  ASSERT_FALSE(stmt->columns->at(0)->nullable);
  ASSERT_EQ(std::string{"DICT"}, stmt->columns->at(0)->encoding->encoding);
  ASSERT_EQ(std::string{"arg1"}, stmt->columns->at(0)->encoding->arg);
  ASSERT_NULL(stmt->columns->at(0)->defaultExpr);
}

TEST(CreateTestCardinality) {
  TEST_PARSE_SINGLE_SQL_WITH_PRINT_ERROR(
      "CREATE TABLE test (v1 INTEGER ENCODING DICT CARDINALITY(10000,100));",
      kStmtCreate, CreateStatement, result, stmt);

  ASSERT_EQ(1, stmt->columns->size());

  ASSERT_TRUE(hsql::DataType::INT == stmt->columns->at(0)->type.data_type);
  ASSERT_FALSE(stmt->columns->at(0)->nullable);
  ASSERT_EQ(std::string{"DICT"}, stmt->columns->at(0)->encoding->encoding);
  ASSERT_NULL(stmt->columns->at(0)->defaultExpr);
  ASSERT_EQ(10000, stmt->columns->at(0)->cardinality->cardinality);
  ASSERT_EQ(100, stmt->columns->at(0)->cardinality->chunkSize);
}

TEST(CreateTestAggregation) {
  TEST_PARSE_SINGLE_SQL_WITH_PRINT_ERROR(
      "CREATE TABLE test (v1 INTEGER AGGREGATION(SUM));", kStmtCreate,
      CreateStatement, result, stmt);

  ASSERT_EQ(1, stmt->columns->size());

  ASSERT_TRUE(hsql::DataType::INT == stmt->columns->at(0)->type.data_type);
  ASSERT_FALSE(stmt->columns->at(0)->nullable);
  ASSERT_NULL(stmt->columns->at(0)->defaultExpr);
  ASSERT_NULL(stmt->columns->at(0)->cardinality);
  ASSERT_NOTNULL(stmt->columns->at(0)->aggregation);
  ASSERT_TRUE(stmt->columns->at(0)->aggregation->type == kExprLiteralString);
  ASSERT_EQ(std::string("SUM"),
            std::string(stmt->columns->at(0)->aggregation->name));
}
