#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * You can only use _putchar function to print
 * @n: The number of _ to draw
 * Return: Null
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n ; i++)

		_putchar('_');

	_putchar('\n');

}


