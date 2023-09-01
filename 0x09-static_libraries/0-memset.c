#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * Description : fills the first n bytes of the
 * memory area pointed to by s with the constant byte b
 *
 * @s: pointer to string to fill
 * @b: constant byte to fill by
 * @n: first number of bytes of the memory area s
 *
 * Return: a pointer to the memory area s
 */

/* solution 1 : using pointers */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
