#include "stdafx.h"
#include "common.h"

void showSize()
{
	char string[6] = "String";
	printf("size of string = %d\n", sizeof(string));
	char *ptr = string;
	printf("size of ptr = %d\n", sizeof(ptr));
	printf("size of *ptr = %d\n", sizeof(*ptr));
}