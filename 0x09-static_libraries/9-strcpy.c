#include "main.h"


/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 *
 * @dest: Type char destination
 * @src: Type char pointer to copy string to
 *
 * Return: Type char destination pointer
 */


char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}

	dest[c] = '\0';

	return (dest);

}
