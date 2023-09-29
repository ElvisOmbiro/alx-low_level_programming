#include "main.h"

/**
 * get_bit -a function returning the value of a bit at a given index
 * @n: the number that is to be searched
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int r;

	if (index > 63)
		return (-1);

	r = (n >> index) & 1;

	return (r);
}

