#pragma once

#include "pch.h"

class TestSource : public ::testing::Test
{
protected:
    void SetUp() override 
    {
        printf("Set up for each test case\n");
    }

    void TearDown() override 
    {
    }

    static void SetUpTestCase() 
    {
        printf("Set up for the entire test suite\n");
    }

    static void TearDownTestCase() 
    {
    }

};