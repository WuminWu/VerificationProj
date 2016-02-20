#ifndef COMMON_H
#define COMMON_H

typedef struct
{
	int count;
	char *ptr;
	char array[20];
	int(*funPtr)(int a, int b);
}reference;

typedef enum
{
	Sunday,      // 0
	Monday = 1,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
}enumWeek;

#endif