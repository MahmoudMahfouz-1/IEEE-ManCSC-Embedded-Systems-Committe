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
	char str[100], word[100];
	int i, index, found = 0;

	printf("Enter any string: ");
	gets(str);
	printf("Enter word to be searched: ");
	gets(word);


	index = 0;
	while(str[index] != '\0')
	{

		if(str[index] == word[0])
		{
			i=0;
			found = 1;
			while(word[i] != '\0')
			{
				if(str[index + i] != word[i])
				{
					found = 0;
					break;
				}

				i++;
			}
		}

		if(found == 1)
		{
			break;
		}

		index++;
	}

	if(found == 1)
	{
		printf("\n'%s' is found at index %d.", word, index);
	}
	else
	{
		printf("\n'%s' is not found.", word);
	}

	return 0;

}
