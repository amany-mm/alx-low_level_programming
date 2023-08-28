#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * Description : copies n bytes from memory area
 * src to memory area dest
 *
 * @dest: pointer to destination string
 * @src: pointer to source pointer
 * @n: first number of bytes of the memory area s
 *
 * Return: a pointer to the memory area s
 */


/* solution 1 : using pointers */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

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
