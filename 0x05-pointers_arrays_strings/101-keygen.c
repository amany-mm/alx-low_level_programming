#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int r = 0, c = 0;
	time_t t;

	/* Seed the random number generator with the current time */
	srand((unsigned int) time(&t));

	/* Loop to generate key */
	while (c < 2772)
	{
		/*Generate a random number between 0 and 127 */
		r = rand() % 128;

		/**
		 * Check if adding the current random number would exceed
		 *  the target key length (2772)
		*/
		if ((c + r) > 2772)
			break;

		/* Add the random number to the current key length */
		c = c + r;

		/* Print the character representation of the random number */
		printf("%c", r);
	}

	/* Print the remaining characters needed to reach the target key length */
	printf("%c\n", (2772 - c));

	return (0);
}
