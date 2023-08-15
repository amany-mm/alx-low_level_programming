#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 * @n: The number to select last digit from
 * Return: the value of the last digit
*/

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (n < 0)
		lastDigit = -1 * lastDigit;

	_putchar(lastDigit + '0');

	return (lastDigit);
}

