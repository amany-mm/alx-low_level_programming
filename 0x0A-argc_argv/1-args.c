#include <stdio.h>

/**
 * main - print name of program
 *
 * @argc: arguments counter
 * @argv: pointer to argument arrays
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);

}
