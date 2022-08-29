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
	int size;
	DPRINTF("Enter Array size: ");
	scanf("%d",&size);
	int arr[size];
	DPRINTF("Enter array Elements\n");
	for(int i = 0; i < size;i++)
	{
		DPRINTF("Enter Element : ");
		scanf("%d",&arr[i]);

	}
	printf("\nArray in reverse order: ");
	for(int i = size-1; i>=0; i--)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
