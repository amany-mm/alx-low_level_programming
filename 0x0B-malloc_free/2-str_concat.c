#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: 1st string
 * @s2: 2nd sting
 *
 * Return: returned pointer should point to a newly allocated
 * space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 *
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0, len2 = 0;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i))
		len1++, i++;

	while (*(s2 + j))
		len2++, j++;
	len2++;  /* add null terminator to length of s2 */

	/** allocate memory */
	concat = malloc((sizeof(char) * (len1 + len2)));

	/* validate memory */
	if (concat == NULL)
		return (NULL);

	i = 0, j = 0;
	/* concatenate 2 strings */
	while (i < len1)
	{
		*(concat + i) = *(s1 + i);
		i++;
	}
	while (j < len2)
	{
		*(concat + i) = *(s2 + j);
		i++;
		j++;
	}

	return (concat);
}
