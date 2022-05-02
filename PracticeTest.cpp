/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

TEST(PracticeTest, an_all_test)
{
	Practice p;
	int sleep[7] = {0,0,0,0,0,0,0};
	int* res = p.allnighter(sleep);
	int* actual = &sleep[0];
	ASSERT_EQ(actual, res);
}

TEST(PracticeTest, an_0_test)
{
	Practice p;
	int sleep[7] = {7,7,7,7,7,7,7};
	int* res = p.allnighter(sleep);
	int* actual = nullptr;
	ASSERT_EQ(actual, res);
}

TEST(PracticeTest, an_3_test)
{
	Practice p;
	int sleep[7] = {7,7,7,0,7,7,7};
	int* res = p.allnighter(sleep);
	int* actual = &sleep[3];
	ASSERT_EQ(actual, res);
}

TEST(PracticeTest, an_null_init_test)
{
	Practice p;
	int sleep[7] = {7,7,7,7,7,7,7};
	int* res = p.allnighter(sleep);
	int* actual = &sleep[0];
	ASSERT_NE(actual, res);
}
