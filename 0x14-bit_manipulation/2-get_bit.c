#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned int number
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_bits;
	int bit;

	/* validate index is not out of range */
	max_bits = (8 * sizeof(unsigned long int));

	if (index > max_bits)
		return (-1);

	/* shift number index places right to find the bit */
	bit = ((n >> index) & 1);

	return (bit);
}
