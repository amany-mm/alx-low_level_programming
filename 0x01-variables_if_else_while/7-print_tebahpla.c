#include <stdio.h>

/**
 * main - Entry point
 * Description: display alphabet reverse and lowercase
 * Return: return 0 and exit
 */

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);

	putchar('\n');

	return (0);
}
