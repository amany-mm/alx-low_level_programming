#include <stdio.h>

/**
 * main - Entry point
 * Description: finds and prints the sum of the even-valued terms
 * in Fibonacci sequence that do not exceed 4000000.
 * Return: 0 if success
*/

int main(void)
{
	long fib1 = 0;
	long fib2 = 1;
	long fibSum;
	float totalSum;

	while (fibSum < 4000000)
	{
		fibSum = fib1 + fib2;

		if (fibSum % 2 == 0)
			totalSum += fibSum;

		fib1 = fib2;
		fib2 = fibSum;
	}
	printf("%.0f\n", totalSum);

	return (0);
}
