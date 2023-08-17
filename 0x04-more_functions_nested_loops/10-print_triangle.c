#include "main.h"

/**
 * print_triangle - prints a triangle
 * Description: You can only use _putchar function to print
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 * @size: The size of the triangle
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int row;
	int column;

	if (size <= 0)
		_putchar('\n');

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size - row ; column++)
		{
			_putchar(' ');
		}

		for (column = 1; column <= row; column++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

}
