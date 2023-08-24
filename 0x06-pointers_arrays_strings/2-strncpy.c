#include "main.h"

/**
 * _strncpy - copies a string
 * copies n bytes of a source into buffer of a destination string
 * exactly like strncpy
 *
 * @dest: destination string
 * @src: source string to copy from
 * @n: number of bytes to be copied from src
 *
 * Return: a pointer to the resulting string dest
 */

/* solution 1 : using pointers */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);

}

/*
*solution 2 : using arrays
*char *_strncpy(char *dest, char *src, int n)
*{
*	int i;
*
*	for (i = 0; i < n && src[i] != '\0'; i++)
*		dest[i] = src[i];
*	while (i < n)
*	{
*		dest[i] = '\0';
*		i++;
*	}
*
*	return (dest);
*}
*/
