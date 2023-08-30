#include "main.h"


/**
 * _pow_recursion - returns the value of x raised to the power of y.
 *
 * Description: If y is lower than 0, the function should return -1.
 * The standard library provides a different function: pow.
 * Run man pow to learn more.
 *
 * @x: int number
 * @y: int number power to raise
 *
 * Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 0)
		return (0);

	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}

