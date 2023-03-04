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

	DPRINTF("Enter any string: ");
	gets(str);

	len = 0;
	while(str[len] != '\0') len++;
	int freqarr[26] = {0};

	for(i = 0; i < len; i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			freqarr[str[i] - 97]++;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			freqarr[str[i] - 65]++;
		}
	}
	DPRINTF("Frequency of all characters in the given string: \n");
	for(i=0; i<26; i++)
	    {
	        /* If current character exists in given string */
	        if(freqarr[i] != 0)
	        {
	            printf("'%c' = %d\n", (i + 97), freqarr[i]);
	        }
	    }

	return 0;

}
