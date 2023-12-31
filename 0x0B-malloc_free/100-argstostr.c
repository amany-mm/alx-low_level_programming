#include "main.h"
#include <stdlib.h>


/**
 * _strlen - returns the length of a string
 *
 * @s: string
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
		len++, s++;

	return (len);
}


/**
 * argstostr - concatenates all the arguments of your program.
 * Each argument should be followed by a \n in the new string
 *
 * @ac: argc
 * @av: arguments
 *
 *
 * Return: NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	char *s;
	int len = 0, i, j, k = 0;

	/* validate input */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* find length to malloc */
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);

	len += (ac + 1); /* add space for newlines and null terminator */

	/* allocate memory and free if error */
	s = malloc(len * sizeof(char));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	/* insert each arg into *str */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[k++] = av[i][j];
		}

		s[k++] = '\n';
	}

	return (s);
}
