#include <stdio.h>

/**
 * main - Entry point
 * Description: Display the alphabet in lowercase, and then in uppercase
 * Return: return 0 and exit the program
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);

	for (l = 'A'; l <= 'Z'; l++)
		putchar(l);

	putchar('\n');
	return (0);
}
