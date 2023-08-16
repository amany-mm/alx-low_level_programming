#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * Return: 0 if success
*/

int main(void)
{
	long fib1, fib2, sum, counter;

	fib1 = 0;
	fib2 = 1;

	for (counter = 0; counter < 50; counter++)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;

		if (counter != 49)
			printf("%ld, ", sum);
		else
			printf("%ld\n", sum);
	}

	return (0);
}
