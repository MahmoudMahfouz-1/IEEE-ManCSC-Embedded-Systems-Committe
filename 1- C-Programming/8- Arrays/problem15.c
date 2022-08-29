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
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
	int size,size2;
	DPRINTF("Enter Array1 size: ");
	scanf("%d",&size);
	DPRINTF("Enter Array2 size: ");
	scanf("%d",&size2);
	int size3 = size + size2;
	int arr[size3];
	DPRINTF("Enter array1 Elements\n");
	for(int i = 0; i < size3;i++)
	{
		DPRINTF("Enter Element : ");
		scanf("%d",&arr[i]);
		if(i == size-1)
			DPRINTF("Enter array2 Elements\n");
	}
	// sort the array then print the elements
	qsort(arr, size3, sizeof(int),cmpfunc);
	for(int i = 0; i < size3;i++)
	{
		DPRINTF("Element %d : %d\n",i+1,arr[i]);
	}
	return 0;
}
