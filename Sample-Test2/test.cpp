#include "pch.h"
#include "Source1.h"

extern "C"
{
#include "Source2.h"
}

TEST(TestCaseName, TestName) 
{
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST(Source1_cpp_test, Source1_cpp_test_retFive_case1) 
{
	{
		int retVal = retFive();
		EXPECT_EQ(retVal, 5);
	}
}

TEST(Source1_cpp_test, Source1_cpp_test_retFive_case2)
{
	{
		int retVal = retFive();
		EXPECT_EQ(retVal, 6);
	}
}

TEST(Source1_cpp_test, Source1_cpp_test_retBool_case1)
{
	{
		int retVal = retBool(true);
		EXPECT_EQ(retVal, 1);
	}
}


TEST(Source1_cpp_test, Source1_cpp_test_retBool_case2)
{
	{
		int retVal = retBool(false);
		EXPECT_EQ(retVal, 0);
	}
}

TEST(Source2_cpp_test, Source2_cpp_test_retSeven_case1)
{
	{
		int retVal = retSeven();
		EXPECT_EQ(retVal, 7);
	}
}

TEST(Source2_cpp_test, Source2_cpp_test_retBoolC_case1)
{
	{
		int retVal = retBoolC(true);
		EXPECT_EQ(retVal, 1);
	}
}


TEST(Source2_cpp_test, Source2_cpp_test_retBoolC_case2)
{
	{
		int retVal = retBoolC(false);
		EXPECT_EQ(retVal, 0);
	}
}

TEST(Source2_cpp_test, Source2_cpp_test_getsVal_case1)
{
	{
		int retVal = getsVal();
		EXPECT_EQ(retVal, 5);
	}
}