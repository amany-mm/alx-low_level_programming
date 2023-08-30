#include "main.h"


/**
 * find_root - helper function to find square
 *
 * @n: int number
 * @root: test this root
 *
 * Return: sqrt int
 */

int find_root(int n, int root)
{

	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (find_root(n, root + 1));

}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * Description: If n does not have a natural square root,
 * the function should return -1
 *
 * The standard library provides a different function:
 * sqrt. Run man sqrt to learn more.
 *
 * @n: int number
 *
 * Return: The natural square root of a number
 * or -1 if not a natural number
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 1));

}
