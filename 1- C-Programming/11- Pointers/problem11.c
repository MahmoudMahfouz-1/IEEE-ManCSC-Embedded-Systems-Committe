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
#define COL 3
#define ROW 3
void matrixPrint(int mat[][COL])
{
	int row, col;

	for (row = 0; row < ROW; row++)
	{
		for (col = 0; col < COL; col++)
		{
			DPRINTF("%d ", *(*(mat + row) + col));
		}

		DPRINTF("\n");
	}
}


void matrixInput(int mat[][COL])
{
	int row, col;

	for (row = 0; row < ROW; row++)
	{
		for (col = 0; col < COL; col++)
		{
			scanf("%d", (*(mat + row) + col));
		}
	}
}

void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL])
{
	int row, col, i;
	int sum;


	for (row = 0; row < ROW; row++)
	{
		for (col = 0; col < COL; col++)
		{
			sum = 0;

			/*
			 * Find sum of product of each elements of
			 * rows of first matrix and columns of second
			 * matrix.
			 */
			for (i = 0; i < COL; i++)
			{
				sum += (*(*(mat1 + row) + i)) * (*(*(mat2 + i) + col));
			}


			/*
			 * Store sum of product of row of first matrix
			 * and column of second matrix to resultant matrix.
			 */
			*(*(res + row) + col) = sum;
		}
	}
}
int main()
{
	int mat1[ROW][COL];
	int mat2[ROW][COL];
	int product[ROW][COL];


	/*
	 * Input elements in matrices.
	 */
	DPRINTF("Enter elements in first matrix of size %dx%d\n", ROW, COL);
	matrixInput(mat1);

	DPRINTF("Enter elements in second matrix of size %dx%d\n", ROW, COL);
	matrixInput(mat2);


	// Call function to multiply both matrices
	matrixMultiply(mat1, mat2, product);


	// Print product of both matrix
	DPRINTF("Product of both matrices is : \n");
	matrixPrint(product);

	return 0;
}
