#include "main.h"

/**
 * is_prime_helper - recursively divide by higher divisor, skip even nums
 *
 * @n: number to check if prime
 * @divisor: divisor
 *
 * Return: 1 if prime, 0 if not, or recursive function call
 */


int is_prime_helper(int n, int divisor)
{
	if (n == divisor)
		return (1);

	if (n % divisor == 0)
		return (1);

	return (is_prime_helper(n, divisor + 1));
}



/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 * @n: int number
 *
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 */

int is_prime_number(int n)
{
	int divisor = 3;

	if (n < 2 || n % 2 == 0)
		return (0);

	if (n == 2)
		return (1);

	return (is_prime_helper(n, divisor));

}
