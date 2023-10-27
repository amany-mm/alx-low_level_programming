#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: unsigned long int number
 * @index: the index, starting from 0 of the bit you want to get
 * Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned int max_bits;

	/* validate index is not out of range */
	max_bits = (8 * sizeof(unsigned long int));

	if (index > max_bits)
		return (-1);

	/* create mask with 1 at given index to work on that index */
	mask <<= index;

	*n = (*n | mask);

	return (1);
}
