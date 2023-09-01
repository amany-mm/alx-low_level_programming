#include <stdio.h>

/**
 * main - print name of program
 *
 * @argc: arguments counter
 * @argv: pointer to argument arrays
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

/**
 * main - print name of program
 * Another way using while
 *
 * @argc: arguments counter
 * @argv: pointer to argument arrays
 *
 * Return: 0 on success
 *
 * int main(int argc, char *argv[])
 * {
 *	while (argc --)
 *		printf ("%s\n", *argv++);
 *
 *	return (0);
 * }
 */
