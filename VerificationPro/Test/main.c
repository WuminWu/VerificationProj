// Test.c#include "stdafx.h"pp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
#include "common.h"


typedef int (*typeFunPtr)(int a, int b);
int(*mathArray[3])(int a, int b);

int main(int argc, _TCHAR* argv[])
{
	showSize();

	reference ref;
	ref.funPtr = add;
	printf("size of struct reference = %d\n", sizeof(ref));
	printf("result = %d\n", ref.funPtr(1,1));

	typeFunPtr sampleFun = add;
	printf("result = %d\n", sampleFun(1,2));

	typeFunPtr mathArraySec[3];
	mathArraySec[0] = add;
	mathArraySec[1] = substraction;
	printf("math0 = %d\t math1 = %d\n", mathArraySec[0](10, 5), mathArraySec[1](10, 5));

	mathArray[0] = add;
	mathArray[1] = substraction;
	printf("math0 = %d\t math1 = %d\n", mathArray[0](10, 5), mathArray[1](10, 5));

	char *array[3] = {'a', 'b', 'c'};
	for (int i = 0; i < 3;i++)
		printf("array[%d] = %x\n", i, array[i]);


	char c = getchar();
	return 0;
}

