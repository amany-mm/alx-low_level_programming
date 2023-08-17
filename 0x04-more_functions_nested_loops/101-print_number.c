#include "main.h"

/**
 * print_number - prints a long integer number without
 * using long or arrays or pointers
 * or hard-code special values.
 * Use _putchar function to print
 *
 * @n: An integer number to be print
 *
 * Return: Null.
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
