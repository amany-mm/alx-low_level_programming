#include <stdio.h> /* printf */
#include <stdlib.h> /* atoi */
# include <stdbool.h> /* bool data type*/


/**
 * is_num - iterate through each argv to check if it's a number
 *
 * @argvv: argument to check
 *
 * Return: 0 on success
 *
*/

bool is_num(char *argvv)
{
	int j;

	for (j = 0; j < argvv[j]; j++)
	{
		if (!(argvv[j] >= '0' && argvv[j] <= '9'))
			return (0);
	}
	return (1);

}

/**
 * main -  adds positive numbers.
 *
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0,
 * followed by a new line
 * If one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1
 * You can assume that numbers and the addition of all the numbers can be
 * stored in an int
 *
 * @argc: arguments counter
 * @argv: pointer to argument arrays
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	/* validate passed argument */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* check passed arguments to add numbers */
	while (i < argc)
	{
		if (is_num(argv[i]))
		{
			sum += atoi(argv[i]);
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}

	printf("%d\n", sum);

	return (0);
}
