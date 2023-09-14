#include <stdio.h> /* prinf */
#include <stdlib.h> /* atoi */

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 if success
 * 1 if no of arg is not correct, 2 if no. of byte is negative.
*/

int main(int argc, char *argv[])
{
	short bytes, i;

	if (argc != 2) /* each opcode is two char long */
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0) /*  validate number of bytes is not negative */
	{
		printf("Error\n");
		exit(2);
	}

	printf("%02x", *((unsigned char *) (main)));

	for (i = 1; i < bytes; ++i)
		printf(" %02x", *((unsigned char *) (main + i)));

	putchar('\n');
	exit(EXIT_SUCCESS); /* exit(0)*/
}

