#include "main.h"

/**
 * _strstr -  locates a substring.
 *
 * Description : finds the first occurrence
 * of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 *
 * @haystack: string to search in
 * @needle: sub string to search by
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */


char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{	/**
		 * if a byte matches first char of needle iterate
		 * through needle until match ends
		*/
		if (haystack[i] == needle[0])
		{ /* Remember the current position in haystack where the match might start */
			x = i;
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
				{
					x++;
					j++;
				} /* If a mismatch is found, stop comparing */
				else
					break;
			}
			/**
			 * edge case: If the end of the needle is reached,it means a match was found
			*/
			if (needle[j] == '\0')
			{	/* Return a pointer to the start of the match in haystack */
				return (haystack + i);
			}
		} /**
		 * If no match is found for the current character, it increments i
		 * to move to the next character in the haystack and continues searching.
		*/
		i++;
	}
	return (0); /* No match found */
}
