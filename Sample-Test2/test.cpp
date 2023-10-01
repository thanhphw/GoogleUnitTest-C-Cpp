#include "test.h"
#include "Source1.h"

extern "C"
{
#include "Source2.h"
}

TEST_F(TestSource, TestSource_1)
{
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST_F(TestSource, TestSource_retFive_case1) 
{
	{
		int retVal = retFive();
		EXPECT_EQ(retVal, 5);
	}
}

TEST_F(TestSource, TestSource_retFive_case2)
{
	{
		int retVal = retFive();
		EXPECT_EQ(retVal, 6);
	}
}

TEST_F(TestSource, TestSource_retBool_case1)
{
	{
		int retVal = retBool(true);
		EXPECT_EQ(retVal, 1);
	}
}


TEST_F(TestSource, TestSource_retBool_case2)
{
	{
		int retVal = retBool(false);
		EXPECT_EQ(retVal, 0);
	}
}

TEST_F(TestSource, TestSource_retSeven_case1)
{
	{
		int retVal = retSeven();
		EXPECT_EQ(retVal, 7);
	}
}

TEST_F(TestSource, TestSource_retBoolC_case1)
{
	{
		int retVal = retBoolC(true);
		EXPECT_EQ(retVal, 1);
	}
}


TEST_F(TestSource, TestSource_retBoolC_case2)
{
	{
		int retVal = retBoolC(false);
		EXPECT_EQ(retVal, 0);
	}
}

TEST_F(TestSource, TestSource_getsVal_case1)
{
	{
		int retVal = getsVal();
		EXPECT_EQ(retVal, 5);
	}
}