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
	char str1[MAX],str2[MAX];
	DPRINTF("Enter String1 : ");
	gets(str1);
	DPRINTF("Enter String2 : ");
	gets(str2);
	char *pStr1 = str1;
	char *pStr2 = str2;

	while(*(++pStr1) != '\0') ;
	while((*pStr1++ = *pStr2++ )) ;

	DPRINTF("Concatenated string is: %s\n",str1);


	return 0;
}
