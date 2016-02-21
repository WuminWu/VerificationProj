// Test.c#include "stdafx.h"pp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
#include "common.h"


int main(int argc, _TCHAR* argv[])
{
	showPtrSize();
	pointFunc();
	arrayOfPointers();

	int swapA = 5, swapB = 10;
	swap(&swapA, &swapB); //copy address to swap (call by address or call by pointers)


	char c = getchar();
	return 0;
}

