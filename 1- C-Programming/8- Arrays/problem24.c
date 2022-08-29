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
	int C[SIZE][SIZE];

	int row, col;

	DPRINTF("Enter elements in matrix A of size 3x3: \n");
	for(row=0; row<SIZE; row++)
	{
		for(col=0; col<SIZE; col++)
		{
			scanf("%d", &A[row][col]);
		}
	}

	DPRINTF("\nEnter elements in matrix B of size 3x3: \n");
	for(row=0; row<SIZE; row++)
	{
		for(col=0; col<SIZE; col++)
		{
			scanf("%d", &B[row][col]);
		}
	}


	for(row=0; row<SIZE; row++)
	{
		for(col=0; col<SIZE; col++)
		{
			C[row][col] = A[row][col] - B[row][col];
		}
	}

	DPRINTF("Difference of two matrices A-B = \n");
	for(row=0; row<SIZE; row++)
	{
		for(col=0; col<SIZE; col++)
		{
			DPRINTF("%d ", C[row][col]);
		}
		DPRINTF("\n");
	}
	return 0;
}
