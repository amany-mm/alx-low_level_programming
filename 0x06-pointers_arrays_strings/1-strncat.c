#include "main.h"
#include <stdio.h>


/**
 * _strncat - similar to the _strcat function,
 * except that it will use at most n bytes from src;
 * and src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes used from src.
 *
 * Return: a pointer to the resulting string dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);

		if (*(src + count2) == '\0')
		{
			break;
		}

		count++;
		count2++;
	}

	return (dest);

}



