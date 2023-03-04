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
	int str1Len = 0;
	// Calculate string 1 length
	for(i = 0; str[i] != '\0';i++)
	{
		count++;
	}
	str1Len = count;

	// convert uppercase string into lowercase
	for(int i = 0; i < str1Len; i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
	DPRINTF("Lowercase string: %s \n",str);


	return 0;
}
