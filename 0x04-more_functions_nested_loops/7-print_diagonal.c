#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * Description: The diagonal should end with a \n
 * You can only use _putchar function to print
 * If n is 0 or less, the function should only print a \n
 * @n: number of times the character \ should be printed
 * Return: Null
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');


	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}

}
