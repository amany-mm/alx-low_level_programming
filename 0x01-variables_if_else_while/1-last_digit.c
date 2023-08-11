#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Display the last digit of the number stored in the variable n
 * Return: 0 and exit
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	printf("Last digit of %d is %d and ", n, digit);
	if (digit > 5)
		printf("is greater than 5\n");
	else if (digit == 0)
		printf("is 0\n");
	else if (digit < 6 && digit != 0)
		printf("is less than 6 and not 0\n");
	return (0);
}
