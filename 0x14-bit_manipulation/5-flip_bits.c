#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: unsigned long int number
 * @m: unsigned long int number
 * Return: 1 if it worked, or -1 if an error occurred
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference;
	unsigned int diff_bits = 0;

	/* Xor both nums n & m to show bit 1 if different bits */
	difference = n ^ m;

	/* keep shifting difference to right and tallying the ones up */
	do {
		diff_bits += (difference & 1);

		difference >>= 1;

	} while (difference > 0);

	return (diff_bits);

}
