#include "main.h"


/**
 * _puts_recursion -  prints a string, followed by a new line.
 *
 * Description: The standard library provides a similar function:
 * puts. Run man puts to learn more.
 *
 * @s: pointer to a a string
 *
 * Return: NULL
 */


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);

	s++;

	_puts_recursion(s);

}
