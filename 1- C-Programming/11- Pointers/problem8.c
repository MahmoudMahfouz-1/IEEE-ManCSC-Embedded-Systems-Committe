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
	int size,element,count= 0;
	DPRINTF("Enter Array size: ");
	scanf("%d",&size);
	int arr[size];
	int i;
	DPRINTF("Enter Array Elements: ");
	for(i = 0; i < size; i++)
	{
		scanf("%d",&arr[i]);
	}
	DPRINTF("Enter Element: ");
	scanf("%d",&element);
	int *pSrc = &arr[0];
	int *pDst = &arr[size-1];

	/* Search for the element */
	while(pSrc++ != pDst)
	{
		if(*pSrc == element)
		{
			printf("%d exists in index %d ",element,count+1);
			return 0;
		}
		count++;
	}
	printf("%d doesn't exists in the array ",element);

	return 0;

}
