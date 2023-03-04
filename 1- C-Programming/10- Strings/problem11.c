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
	DPRINTF("Enter The string: ");
	gets(str);
	int count = 0;
	int i,j;
	int str1Len = 0;
	// Calculate string 1 length
	for(i = 0; str[i] != '\0';i++)
	{
		count++;
	}
	str1Len = count;


	for(int i = 0, j = str1Len -1; i < str1Len; i++,j--)
	{
		str2[i] = str[j];
	}
	DPRINTF("String in reverse: %s \n",str2);



	return 0;
}
