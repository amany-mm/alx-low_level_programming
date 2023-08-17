#include "main.h"

/**
 * print_square - Prints a square
 * Description: You can only use _putchar function to print
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 * @size: The size of the square
 * Return: Null
*/

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}

