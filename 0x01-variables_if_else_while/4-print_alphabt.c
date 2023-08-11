#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet without q and e
 * Return: return 0 and exit the program
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == 'e' || l == 'q')
			l++;

		putchar(l);
	}

	putchar('\n');

	return (0);
}
