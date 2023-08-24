#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: array of integers
 * @n: the number of elements of the array
 *
 * Return: Null
 */


void reverse_array(int *a, int n)
{
	int tmp = 0;
	int begin = 0;
	int end = n - 1;

	while (begin < end)
	{
		tmp = *(a + begin);

		*(a + begin) = *(a + end);

		*(a + end) = tmp;

		begin++;
		end--;

	}

}


