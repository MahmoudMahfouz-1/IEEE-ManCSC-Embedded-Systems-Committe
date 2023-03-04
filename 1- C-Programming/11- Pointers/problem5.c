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
	DPRINTF("Enter Array Elements: ");
	for(i = 0; i < size; i++)
	{
		scanf("%d",&arr1[i]);
	}
	int *pStart = &arr1[0];
	int *pEnd = &arr1[size];
	int *pArr2 = &arr2[0];

	while(pStart != pEnd)
	{
		*pArr2++ = *pStart++;
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
