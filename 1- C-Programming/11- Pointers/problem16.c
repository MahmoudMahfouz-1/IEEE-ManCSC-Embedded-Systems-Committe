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
	char str[MAX];
	DPRINTF("Enter String : ");
	gets(str);
	char *pStr_S = str;
	char *pStr_E = str + (strlen(str)-1) ;

	// Reversing the string
	for(int i = 0; i < strlen(str)/2 ; i++)
	{
		char temp;

		temp = *pStr_S;
		*pStr_S = *pStr_E;
		*pStr_E = temp ;
		pStr_E--,pStr_S++;
	}
	DPRINTF("Reversed string is: %s\n",str);
	return 0;
}
