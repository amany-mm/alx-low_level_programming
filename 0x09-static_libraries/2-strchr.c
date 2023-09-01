#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * Description : The standard library provides
 * a similar function: strchr. Run man strchr to learn more.
 *
 * @s: pointer to string to search in
 * @c: char to search by in a string
 *
 * Return: a pointer to the first occurrence of
 * the character c in the string s, or NULL if the character is not found
 */


char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (s);

	while (*s)
	{
		if (*s == c)
			return (s);

		s++;
	}

	if (c == '\0')
		return (s);


	return (0);

}
