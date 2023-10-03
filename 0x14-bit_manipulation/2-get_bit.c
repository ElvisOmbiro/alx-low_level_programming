#include "main.h"

/**
 * get_bit -a function returning the value of a bit at a given index
 * @n:  number to be searched
 * @index: the index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int k;

	if (index > 63)
		return (-1);

	k = (n >> index) & 1;

	return (k);
}

