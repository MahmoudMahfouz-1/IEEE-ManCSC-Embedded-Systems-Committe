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
	int arr[size];
	int i;
	DPRINTF("Enter Array Elements: ");
	for(i = 0; i < size; i++)
	{
		scanf("%d",&arr[i]);
	}

	int *pSrc = &arr[0];
	int *pDst = &arr[size-1];

	/* Reverse Array*/
	for(i = 0; i < size/2 ; i++)
	{
		int temp = 0;
		temp = *pSrc;
		*pSrc = *pDst;
		*pDst = temp;

		pSrc++,pDst--;
	}
	DPRINTF("Reversed Array: ");
	for(i = 0; i < size; i++)
	{
		DPRINTF("%d ",arr[i]);
	}
	return 0;

}
