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
	int len, startIndex, endIndex;

	DPRINTF("Enter any string: ");
	gets(str);


	len = 0;
	while(str[len] != '\0') len++;

	startIndex = 0;
	endIndex = len-1;


	while(startIndex <= endIndex)
	{
		if(str[startIndex] != str[endIndex])
			break;

		startIndex++;
		endIndex--;
	}

	if(startIndex >= endIndex)
	{
		DPRINTF("String is Palindrome.");
	}
	else
	{
		DPRINTF("String is Not Palindrome.");
	}


	return 0;
}
