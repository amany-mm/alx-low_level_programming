#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the largest
 * prime factor of the number 612852475143
 * Return: o if success.
 */

int main(void)
{
	long int num = 612852475143;
	long int factor;

	for (factor = 2; factor < num; factor++)
	{
		if (num % factor == 0)
			num = num / factor;

	}

	printf("%ld\n", factor);

	return (0);
}
