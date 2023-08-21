#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: char pointer
 *
 * Return: Null
 */

void print_rev(char *s)
{
	int length;
	int c;

	length = strlen(s);

	for (c = length - 1; c >= 0 ; c--)
		_putchar(s[c]);

	_putchar('\n');

}
