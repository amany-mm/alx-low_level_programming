#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: Type int pointer
 * @b: Type int pointer
 *
 * Return: Null
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;

	*b = c;
}
