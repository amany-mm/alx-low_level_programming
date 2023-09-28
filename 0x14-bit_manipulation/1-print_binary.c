#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned int number
 * Return: NULL
*/
void print_binary(unsigned long int n)
{
	unsigned long int n_copy = n;
	unsigned long int mask = 1;
	int len = 0;

	while (n_copy > 0)
	{
		len++;
		n_copy >>= 1;
	}

	len -= 1;

	/* create mask based on num length */
	if (len > 0)
		mask = mask << len;

	/* match each right most bit to check if 0 or 1 */
	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');

		else
			_putchar('0');

		mask >>= 1;

	}
}

