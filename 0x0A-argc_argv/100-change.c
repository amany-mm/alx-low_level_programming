# include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins to make change
 * for an amount of money.
 *
 * Usage: ./change cents
 * Where cents is the amount of cents you need to give back
 *
 * If the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1
 *
 * You should use atoi to parse the parameter passed to your program
 *
 * If the number passed as the argument is negative, print 0,
 * followed by a new line
 *
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 *
 * @argc: arguments counter
 * @argv: pointer to argument arrays
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int n, coins = 0;

	/* validate argument passed  or not */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/* validate if argument number is negative */
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	/**
	 * Convert argument string into integer and calculate coins
	 * Calculates the minimum number of coins needed for the amount n
	 * by repeatedly dividing n by various coin denominations
	 * (25, 10, 5, 2, and 1 cents) and adding the result to the coins variable.
	 * After each calculation, it updates the value of n to the remainder after
	 * the division.
	*/
	n = atoi(argv[1]);

	coins += n / 25;
	n = n % 25;

	coins  += n / 10;
	n = n % 10;

	coins += n / 5;
	n = n % 5;

	coins += n / 2;
	n = n % 2;

	coins += n / 1;

	printf("%d\n", coins);
	return (0);
}
