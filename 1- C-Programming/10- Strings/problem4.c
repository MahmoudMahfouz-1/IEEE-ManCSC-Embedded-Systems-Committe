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
	int i;
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
	/* Compare the 2 strings */

	// Check the length of each string
	if(str1Len > str2Len || str1Len < str2Len)
	{
		DPRINTF("Both strings are not lexographically equal.");
		return 0;
	}

	// Check each letter
	for(i = 0; i < str1Len ; i++)
	{
		if(str[i] != str2[i])
		{
			DPRINTF("Both strings are not lexographically equal.");
			return 0;
		}
	}

	DPRINTF("Both strings are lexographically equal.");

	return 0;
}
