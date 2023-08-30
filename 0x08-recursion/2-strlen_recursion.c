#include "main.h"


/**
 * _strlen_recursion - returns the length of a string.
 *
 * Description: The standard library provides a similar
 * function: strlen. Run man strlen to learn more.
 *
 * @s: pointer to a a string
 *
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (1 + _strlen_recursion(s));
}
