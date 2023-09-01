#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that multiplies two numbers
 * arguments passed from command line.
 *
 * @argc: arguments counter
 * @argv: pointer to argument arrays
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	/* validate input has 2 arguments passed */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* multiply 2 arguments passed via command line */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
