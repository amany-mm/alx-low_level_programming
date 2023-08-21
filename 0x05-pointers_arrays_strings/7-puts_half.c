#include "main.h"
#include <string.h>


/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * The function should print the second half of the string
 * If the number of characters is odd, the function should
 * print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 *
 * @str: char pointer
 *
 * Return: Null
 */

void puts_half(char *str)
{
	long int half;
	long int length = strlen(str);
	long int c;

	/* number of characters is even */
	if (length % 2 == 0)
		half = length / 2;

	/* number of characters is odd */
	else
		half = (length - 1) / 2;

	/* prints half of a string */
	for (c = half; str[c] != '\0'; c++)
		_putchar(str[c]);

	_putchar('\n');

}
