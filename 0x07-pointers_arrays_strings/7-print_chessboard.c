#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 *
 * Description : finds the first occurrence
 * of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 *
 * @a: 2D array
 *
 * Return: Null
 */


void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8 ; row++)
	{
		for (column = 0; column < 8; column++)
			_putchar(a[row][column]);

		_putchar('\n');
	}
}
