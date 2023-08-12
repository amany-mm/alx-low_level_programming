#include <stdio.h>

/**
 * main - Entry point
 * Description: Display all numbers from 0 to 9 using putchar
 * Return: return 0 and exit.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	putchar('\n');
	return (0);
}
