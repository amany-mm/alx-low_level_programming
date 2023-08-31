/**
 * substring_match - check if a substring after wildcard matches s1
 *
 * @s1: 1st string
 * @s2: 2nd string
 *  * @after_wildcard: placeholder for position right after wildcard
 * Return: 1 if matched, 0 if not
 */

int substring_match(char *s1, char *s2, char *after_wildcard)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == '\0' && *s2 == '*')
		return (substring_match(s1, s2 + 1, s2 + 1));

	if (*s1 == '\0' && *s2 != '\0')
		return (0);

	if (*s2 == '*')
		return (substring_match(s1, s2 + 1, s2 + 1));

	if (*s1 == *s2)
		return (substring_match(s1 + 1, s2 + 1, after_wildcard));

	else
		return (substring_match(s1 + 1, after_wildcard, after_wildcard));
}



/**
 * wildcmp - compares two strings
 * returns 1 if the strings can be considered identical,
 * otherwise return 0.
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: returns 1 if the strings can be considered identical,
 * otherwise return 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	else if (*s2 == '*')
		return (substring_match(s1, (s2 + 1), (s2 + 1)));

	else
		return (0);
}
