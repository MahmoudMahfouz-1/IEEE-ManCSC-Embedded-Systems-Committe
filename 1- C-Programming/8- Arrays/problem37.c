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
	int SIZE = 2;
	int A[SIZE][SIZE];


	int row, col,det = 0;

	DPRINTF("Enter elements in matrix A of size 2x2: \n");
	for(row=0; row<SIZE; row++)
	{
		for(col=0; col<SIZE; col++)
		{
			scanf("%d", &A[row][col]);
		}
	}

	det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);

	    printf("Determinant of matrix A = %d", det);
	return 0;
}
