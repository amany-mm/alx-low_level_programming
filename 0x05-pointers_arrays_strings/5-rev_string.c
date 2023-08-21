#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string.
 *
 * @s: char pointer
 *
 * Return: Null
 */

void rev_string(char *s)
{
	/* mark the beginning of the string */
	char *begin = s;

	/* mark the end */
	char *end = begin + strlen(s) - 1;

	/* swap the beginning and the end */
	while (begin < end)
	{
		char tmp = *begin;
		*begin = *end;
		*end = tmp;

		begin++;
		end--;
	}

}

