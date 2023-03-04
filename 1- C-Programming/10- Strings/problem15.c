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
	int len, i;
	char ch;

	DPRINTF("Enter any string: ");
	gets(str);
	DPRINTF("Enter any character : ");
	ch = getchar();

	len = 0;
	while(str[len] != '\0') len++;
	for(i = len-1; i >= 0; i--)
	{
		if(str[i] == ch)
		{
			DPRINTF("letter is last found in index %d\n",i);
			return 0;
		}
	}
	DPRINTF("letter isn't in the string\n");

	return 0;
}
