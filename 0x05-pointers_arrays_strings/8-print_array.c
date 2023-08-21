#include "main.h"
#include <stdio.h>


/**
 * print_array - prints n elements of an array of integers
 *
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order
 * as they are stored in the array
 * You are allowed to use printf
 *
 * @a: array of integers
 * @n: number of elements of the array to be printed
 *
 * Return: Null
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
