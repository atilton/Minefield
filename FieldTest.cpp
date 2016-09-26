/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}

TEST(FieldTest, checkInBounds)
{
	Field minefield;
	
  minefield.placeMine(-1,-1);
	ASSERT_FALSE( minefield.isSafe(-1,-1 ) );
}

TEST(FieldTest, placeMineOutBounds)
{
	Field minefield;
	
	minefield.placeMine(60,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(60,5) );
}

TEST(FieldTest, revealAdjacent)
{
	Field minefield;

  minefield.revealAdjacent(5,5);
	ASSERT_EQ( EMPTY_SHOWN, minefield.get(0,0) );
}
