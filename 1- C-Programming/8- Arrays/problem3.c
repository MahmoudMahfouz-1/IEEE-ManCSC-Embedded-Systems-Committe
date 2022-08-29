/*
 * main.c
 *
 *  Created on: Aug 29, 2022
 *      Author: Mahmoud Essam
 */

#include "stdio.h"
#define DPRINTF(...)	{fflush(stdout);\
		fflush(stdin);\
		printf(__VA_ARGS__);\
		fflush(stdout);\
		fflush(stdin);}

int main()
{
	int size, sum = 0;
	DPRINTF("Enter Array size: ");
	scanf("%d",&size);
	int arr[size];
	for(int i = 0; i < size;i++)
	{
		DPRINTF("Enter Element : ");
		scanf("%d",&arr[i]);
	}

	for(int i = 0; i < size;i++)
	{
		sum += arr[i];
	}
	DPRINTF("Sum of all elements = %d",sum);
	return 0;
}
