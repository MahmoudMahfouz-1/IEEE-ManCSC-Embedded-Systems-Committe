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
	int SIZE = 3;
	int A[SIZE][SIZE];
	int B[SIZE][SIZE];


	int row, col,sum = 0;

	DPRINTF("Enter elements in matrix A of size 3x3: \n");
	for(row=0; row<SIZE; row++)
	{
		for(col=0; col<SIZE; col++)
		{
			scanf("%d", &A[row][col]);
		}
	}

	for(row=0; row<SIZE; row++)
	{
		sum = 0;
		for(col=0; col<SIZE; col++)
		{
			sum += A[row][col];
		}
		printf("Sum of elements of Row %d = %d\n", row+1, sum);
	}

	for(row=0; row<SIZE; row++)
	{
		sum = 0;
		for(col=0; col<SIZE; col++)
		{
			sum += A[col][row];
		}

		printf("Sum of elements of Column %d = %d\n", row+1, sum);
	}
	return 0;
}
