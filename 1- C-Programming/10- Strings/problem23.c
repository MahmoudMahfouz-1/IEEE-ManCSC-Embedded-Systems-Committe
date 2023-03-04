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
	char str[100], ch;
	int len, i;

	DPRINTF("Enter any string: ");
	gets(str);
	DPRINTF("Enter any character: ");
	ch = getchar();

	len = 0;
	while(str[len] != '\0') len++;
	
	for(i = 0; i < len; i++)
	{
		int j;
		if(str[i] == ch)
		{
			for(j = i; j < len; j++)
			{
				str[j] = str[j+1];
			}
			i--;
		}
	}
	DPRINTF("String after removing '%c': %s", ch, str);

	return 0;

}
