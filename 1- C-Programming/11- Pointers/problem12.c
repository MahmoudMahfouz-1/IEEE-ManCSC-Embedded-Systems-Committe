/*
 * main.c
 *
 *  Created on: Aug 29, 2022
 *      Author: Mahmoud Essam
 */

#include "stdio.h"
#include <stdlib.h>
#include "string.h"
#include <limits.h>
#define DPRINTF(...)	{fflush(stdout);\
		fflush(stdin);\
		printf(__VA_ARGS__);\
		fflush(stdout);\
		fflush(stdin);}

#define MAX 100
int main()
{
	char str[MAX];
	int count = 0;
	DPRINTF("Enter String : ");
	gets(str);
	char *pStr = &str[0];
	while(*pStr != '\0')
	{
		pStr++;
		count++;
	}
	DPRINTF("Length of the string is %d\n",count);


	return 0;
}
