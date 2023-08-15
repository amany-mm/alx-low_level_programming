#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: Prints the alphabet, in lowercase, followed by a new line
 * Return: void
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
