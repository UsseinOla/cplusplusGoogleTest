#include "pch.h"
#include "..\MathApp\doubleNum.cpp"

TEST(DoubleNumTest, positiveValues)
{
	ASSERT_EQ(12, doubleNum(6));
	ASSERT_EQ(4, doubleNum(2));
	ASSERT_EQ(120, doubleNum(60));
}


TEST(DoubleNumTest, negativeValues)
{
	ASSERT_EQ(-12, doubleNum(-6));
	ASSERT_EQ(-4, doubleNum(-2));
	ASSERT_EQ(-120, doubleNum(-60));
}

TEST(QualifiedString, test_true)
{
ASSERT_TRUE(qualifiedString(1));
}

TEST(QualifiedString, test_false) 
{
ASSERT_FALSE(qualifiedString(5));
}

TEST(ComparisonVar, greaterThan)
{
ASSERT_GT(5,2);
}

TEST(ComparisonVar, lessThan)
{

	ASSERT_LE(0, 2);
}

TEST(ComparisonVar, notEqual) 
{
ASSERT_NE(5, 6);
}

TEST(ComparionVar, Equal) 
{
ASSERT_EQ(9, 9);
}
