#include <stdio.h> /* prinf */
#include <stdlib.h> /* atoi */
#include "3-calc.h"

/**
 * main - user pass two integer numbers and operators
 * and main will return math operation match by function pointer.
 * @argc: arguments counter
 * @argv: arguments list
 * Return: 0 if success
*/
int main(int argc, char *argv[])
{
	int n1, n2;
	int (*f)(int, int);

	/* validate input */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* convert user inputs to integers and point to correct operator functions */
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(n1, n2)); /* calculate by function pointer */

	return (0);
}
