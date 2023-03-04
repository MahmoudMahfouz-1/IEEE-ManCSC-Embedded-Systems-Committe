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
	char str[100],str2[100];
	DPRINTF("Enter The string1: ");
	gets(str);
	DPRINTF("Enter The string2: ");
	gets(str2);
	int count = 0;
	int i, j;
	int str1Len = 0, str2Len = 0;
	// Calculate string 1 length
	for(i = 0; str[i] != '\0';i++)
	{
		count++;
	}
	str1Len = count;

	// Calculate string 2 length
	count = 0;
	for(i = 0; str2[i] != '\0';i++)
	{
		count++;
	}
	str2Len = count;
	// Concatenate  the 2 strings into one string --> str
	for(i = 0, j = str1Len; i < str2Len; i++, j++)
	{
		str[j] = str2[i];
	}

	str[str2Len+str1Len] = '\0';
	DPRINTF("Lowercase string: %s \n",str);

	return 0;
}
