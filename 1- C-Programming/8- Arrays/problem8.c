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
	int size;
	DPRINTF("Enter Array size: ");
	scanf("%d",&size);
	int arr[size];
	int arr2[size];
	for(int i = 0; i < size;i++)
	{
		DPRINTF("Enter Element : ");
		scanf("%d",&arr[i]);
	}
	for(int i = 0; i < size; i++)
		arr2[i] = arr[i];
	printf("Array1\n");
	for(int i = 0; i < size;i++)
	{
		DPRINTF("Element %d : %d\n",i+1,arr[i]);
	}
	printf("Array2\n");
	for(int i = 0; i < size;i++)
	{
		DPRINTF("Element %d : %d\n",i+1,arr2[i]);
	}
	return 0;
}
