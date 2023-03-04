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
	int i;
	// Calculatr string 1 length
	for(i = 0; str[i] != '\0';i++)
	{
		count++;
	}
	// Copy the data from string 1 to string 2 letter by letter
	for(i = 0; i < count; i++)
	{
		str2[i] = str[i];
	}
	str2[count] = '\0';
	DPRINTF("Original string: %s \n",str);
	DPRINTF("Copied string: %s \n",str2);

	return 0;
}
