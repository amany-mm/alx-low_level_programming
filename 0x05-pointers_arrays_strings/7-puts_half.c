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
	int len = strlen(str);

	/* number of characters is even */
	if (len % 2 == 0)
		len = len / 2;

	/* number of characters is odd */
	else
		len = (len + 1) / 2;

	/* prints half of a string */
	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}

	_putchar('\n');

}
