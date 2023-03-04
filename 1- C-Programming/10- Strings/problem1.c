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

int main()
{
	char str[100];
	DPRINTF("Enter The string: ");
	gets(str);
	int count = 0;
	int i;
	for(i = 0; str[i] != '\0';i++)
	{
		count++;
	}
	DPRINTF("Length of string is %d",count);

	return 0;
}
