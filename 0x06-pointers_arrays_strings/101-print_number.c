#include "main.h"

/**
 * print_number - prints an integer.
 *
 * You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 *
 * @n: number to print
 *
 * Return: Null
 */

void print_number(int n)
{
	unsigned int integerNum = n;

	if (n < 0)
	{
		integerNum = -n;
		_putchar('-');
	}

	else
	{
		integerNum = n;
	}

	/* Recursive call to print each digit */
	if (integerNum / 10)
		print_number(integerNum / 10);

	/* print last digit */
	_putchar((integerNum % 10) + '0');
}
