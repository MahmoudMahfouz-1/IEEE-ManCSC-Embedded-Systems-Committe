/*
 * main.c
 *
 *  Created on: Aug 29, 2022
 *      Author: Mahmoud Essam
 */

#include "stdio.h"
#include <stdlib.h>
#include <limits.h>
#define DPRINTF(...)	{fflush(stdout);\
		fflush(stdin);\
		printf(__VA_ARGS__);\
		fflush(stdout);\
		fflush(stdin);}

int main()
{
	int size, count = 0;
	DPRINTF("Enter Array size: ");
	scanf("%d",&size);
	int arr[size+1];
	for(int i = 0; i < size;i++)
	{
		DPRINTF("Enter Element : ");
		scanf("%d",&arr[i]);
	}
	int i, j;
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
				break;
			}
		}
	}

	DPRINTF("Total number of duplicate elements found in array = %d\n", count);
	return 0;
}
