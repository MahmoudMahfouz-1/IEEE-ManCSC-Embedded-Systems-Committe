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
	int size;
	DPRINTF("Enter Array size: ");
	scanf("%d",&size);
	int arr1[size],arr2[size];
	int i;
	DPRINTF("Enter Array1 Elements: ");
	for(i = 0; i < size; i++)
	{
		scanf("%d",&arr1[i]);
	}
	DPRINTF("Enter Array2 Elements: ");
	for(i = 0; i < size; i++)
	{
		scanf("%d",&arr2[i]);
	}
	int *pSarr1 = &arr1[0];
	int *pSarr2 = &arr2[0];

	/* Swap The 2 arrays*/
	for(i = 0; i < size ; i++)
	{
		int pTemp = 0;

		pTemp = *pSarr1;
		*pSarr1 = *pSarr2;
		*pSarr2 = pTemp;

		pSarr1++,pSarr2++;

	}

	DPRINTF("Array1: ");
	for(i = 0; i < size; i++)
	{
		DPRINTF("%d ",arr1[i]);
	}
	DPRINTF("\nArray2: ");
	for(i = 0; i < size; i++)
	{
		DPRINTF("%d ",arr2[i]);
	}
	return 0;

}
