#include "main.h"
#include <stdlib.h>

/**
 * _strdup -returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * The _strdup() function returns a pointer to a new string
 * which is a duplicate of the string str.
 *
 * Memory for the new string is obtained with malloc,
 * and can be freed with free.
 * The standard library provides a similar function: strdup.
 * Run man strdup to learn more.
 *
 * @str: string to duplicate
 *
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
	char *duplicate_str;
	int i = 0, len = 0;

	/* Validate input str */
	if (str == NULL)
		return (NULL);

	while (*(str + i))
	{
		len++;
		i++;
	}
	len++; /* Add null terminator to length */

	/* Allocate memory */
	duplicate_str = malloc(sizeof(char) * len);

	/* Validate memory */
	if (duplicate_str == NULL)
		return (NULL);

	/* Copy str into duplicate_str */
	i = 0;
	while (i < len)
	{
		*(duplicate_str + i) = *(str + i);
		i++;
	}

	return (duplicate_str);
}
