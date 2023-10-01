#include <stdio.h>
#include <stdbool.h>
#include "Source2.h"

static int sVal = 5;

int getsVal()
{
	return sVal;
}

int retSeven()
{
	return 7;
}

int retBoolC(bool flag)
{
	if (flag == true)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}