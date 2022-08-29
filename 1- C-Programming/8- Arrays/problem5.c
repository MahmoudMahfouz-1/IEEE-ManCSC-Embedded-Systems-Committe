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
	int size, sum = 0;
	DPRINTF("Enter Array size: ");
	scanf("%d",&size);
	int arr[size];
	for(int i = 0; i < size;i++)
	{
		DPRINTF("Enter Element : ");
		scanf("%d",&arr[i]);
	}
	int fMax= INT_MIN,sMax= INT_MIN;
	for(int i=0; i<size; i++)
	{
		if(arr[i] > fMax)
		{

			sMax = fMax;
			fMax = arr[i];
		}
		else if(arr[i] > sMax && arr[i] < fMax)
		{

			sMax = arr[i];
		}

	}
	printf("Second largest = %d", sMax);
	return 0;
}
