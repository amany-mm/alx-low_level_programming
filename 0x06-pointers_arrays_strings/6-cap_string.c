#include "main.h"

/**
 * is_separator - check if character is a separator
 *
 * @c: char to check
 *
 * Return: 1 if character is separator else 0
*/
int is_separator(char c)
{
	char separators[] = {'\t', '\n', ' ', ',', ';', '!',
			  '.', '?', '\"', '(', ')', '{', '}'};

	int i = 0;

	while (separators[i] != '\0')
	{
		if (c == separators[i])
			return (1);

		i++;
	}
	return (0);
}



/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: string pointer
 *
 * Return: all words of a string capitalized
 */

char *cap_string(char *s)
{
	int i = 0;
	int sep = 1;

	while (s[i] != '\0')
	{
		/* if it's lowercase and prior char is separator, capitalize it*/
		if (sep == 1 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
			sep = 0;
		}

		sep = is_separator(s[i]);
		i++;

	}

	return (s);

}






