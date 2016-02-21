#include "stdafx.h"
#include "common.h"
#include "math.h"

void showPtrSize()
{
	char string[6] = "String";
	printf("size of string = %d\n", sizeof(string));
	char *ptr = string;
	printf("size of ptr = %d\n", sizeof(ptr));
	printf("size of *ptr = %d\n", sizeof(*ptr));
}

void pointFunc()
{
	int(*mathPtr)(int, int);
	mathPtr = add;
	//printf("result = %d\n", (*mathPtr)(1,2));
	//printf("result = %d\n", mathPtr(1, 2)); // the same

	typedef int(*typeFunPtr)(int a, int b);
	typeFunPtr sampleFun = add;
	printf("result = %d\n", sampleFun(1, 2));

	typeFunPtr mathArrayPtr[3];
	mathArrayPtr[0] = add;
	mathArrayPtr[1] = substraction;

	int(*mathArray[3])(int a, int b);
	mathArray[0] = add;
	mathArray[1] = substraction;
}

void arrayOfPointers()
{
	char *array[3] = { 'a', 'b', 'c' };
	for (int i = 0; i < 3; i++)
		//printf("array[%d] = %x\n", i, *array[i]); //ERROR
		printf("array[%d] = %x\n", i, array[0]++);
}

void swap(int *aPtr, int *bPtr)
{
	int temp = *aPtr;
	*aPtr = *bPtr;
	*bPtr = temp;
}