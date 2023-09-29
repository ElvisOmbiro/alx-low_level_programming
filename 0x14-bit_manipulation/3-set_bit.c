#include "main.h"

/**
 * set_bit - a function setting the value of a bit to 1 at a given index
 * @n: pointer pointing to the number to be changed
 * @index: the index, starting from 0 of the bit to be set
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

