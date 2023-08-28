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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		else
			s++;
	}
	/* edge case: if string is equal the character, It won't enter the while */
	if (*s == c)
		return (s);

	else
		return (0);

}
