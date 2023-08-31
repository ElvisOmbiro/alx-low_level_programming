#include "main.h"

/**
 * get_bit -a function that returns the value of a bit at a given index
 * @n: the number to be searched
 * @index: the index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int v;

	if (index > 63)
		return (-1);

	v = (n >> index) & 1;

	return (v);
}

