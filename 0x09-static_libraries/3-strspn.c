#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * Description : The standard library provides a similar
 * function: strspn. Run man strspn to learn more.
 *
 * @s: pointer to string
 * @accept: characters to search by
 *
 * Return:  number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{

		for (j = 0; *(accept + j); j++)
		{

			if (*(s + i) == *(accept + j))
				break;

		}

	if (*(accept + j) == '\0')
		break;
	}

	return (i);

}
