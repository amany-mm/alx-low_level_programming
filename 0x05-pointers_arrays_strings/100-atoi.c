#include "main.h"


/**
 * _atoi - converts a string to an integer.
 * The number in the string can be preceded by an infinite number of characters
 * You need to take into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * You are not allowed to use long
 * You are not allowed to declare new variables of “type” array
 * You are not allowed to hard-code special values
 * We will use the -fsanitize=signed-integer-overflow gcc flag
 * to compile your code.
 *
 *
 * @s: char
 *
 * Return: Type int
 *
 */


int _atoi(char *s)
{
	/* Keeps track of the current position in the input string.*/
	unsigned int count = 0;
	/* Keeps track of the number of digits encountered in the input string.*/
	unsigned int size = 0;
	/* Stores the final integer value to be returned. */
	unsigned int oi = 0;
	/* Stores the sign of the integer (1 for positive, -1 for negative). */
	unsigned int pn = 1;
	/* Multiplier used to calculate the place value of each digit.*/
	unsigned int m = 1;

	unsigned int i;

	/* Loop to analyze the input string */
	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			pn *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}
	/* Loop to calculate the integer value */
	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
