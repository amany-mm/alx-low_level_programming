#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * Description : locates the first occurrence in the string
 * s of any of the bytes in the string accept
 * The standard library provides a similar function: strpbrk.
 * Run man strpbrk to learn more.
 *
 * @s: pointer to string
 * @accept: characters to search by
 *
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */


char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{

		for (j = 0; *(accept + j); j++)
		{

			if (*(s + i) == *(accept + j))
				break;

		}

	if (*(accept + j) != '\0')
		return (s + i);
	}

	return (0);

}
