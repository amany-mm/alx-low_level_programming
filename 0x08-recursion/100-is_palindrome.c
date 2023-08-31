/**
 * compare - compares head and tail indices for match
 *
 * @head: index start from left of string
 * @tail: index start from right of string, moving backwards
 *
 * Return: 1 if palindrome, 0 if not
 */
int compare(char *head, char *tail)
{
	if (head >= tail)
		return (1);

	if (*head == *tail)
		return (compare(head + 1, tail - 1));

	return (0);
}



/**
 * _strlen - find string length to access last index
 *
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (1 + (_strlen(s)));

}


/**
 * is_palindrome - Check if a string is palindrome
 * returns 1 if a string is a palindrome and 0 if not.
 * An empty string is a palindrome
 *
 * @s: string s
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (compare(s, (s + len - 1)));

}
