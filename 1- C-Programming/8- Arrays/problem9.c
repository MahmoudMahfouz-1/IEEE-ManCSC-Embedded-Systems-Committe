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
	int size, num , pos;
	DPRINTF("Enter Array size: ");
	scanf("%d",&size);
	int arr[size+1];
	for(int i = 0; i < size;i++)
	{
		DPRINTF("Enter Element : ");
		scanf("%d",&arr[i]);
	}
	DPRINTF("Enter element to insert : ");
	scanf("%d", &num);
	DPRINTF("Enter the element position : ");
	scanf("%d", &pos);
	int i = 0;
	while(i != size - pos +1)
	{
		arr[size  - i] = arr[size - 1 - i];
		i++;
	}
	arr[pos-1] = num;
	for(int i = 0; i < size+1;i++)
	{
		DPRINTF("Element %d : %d\n",i+1,arr[i]);
	}

	return 0;
}
