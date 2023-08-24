/**
 * rot13 - encodes a string using rot13.
 *
 * You can only use if statement once in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 *
 * @s: string to encode
 *
 * Return: s string pointer encoded
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] += 13;
			i++;
		}

		if ((s[i] >=  'n' && s[i] <= 'z') || (s[i] >=  'N' && s[i] <= 'Z'))
			s[i] -= 13;

		i++;
	}

	return (s);

}

