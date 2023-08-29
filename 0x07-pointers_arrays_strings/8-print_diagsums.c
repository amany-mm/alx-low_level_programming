#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of
 * a square matrix of integers.
 * You are allowed to use the standard library
 *
 * @a: matrix
 * @size: matrix size
 *
 * Return: NULL
 */


void print_diagsums(int *a, int size)
{
	int i, row;
	int diagonalSum1 = 0;
	int diagonalSum2 = 0;

	for (row = 0; row < size ; row++)
	{
		i = (row * size) + row;
		diagonalSum1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diagonalSum2 += a[i];
	}

	printf("%d, %d\n", diagonalSum1, diagonalSum2);

}
