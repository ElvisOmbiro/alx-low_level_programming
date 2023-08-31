#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need
 * in order to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int r, count = 0;
	unsigned long int existing;
	unsigned long int unknown = n ^ m;

	for (r = 63; r >= 0; r--)
	{
		existing = unknown >> r;
		if (existing & 1)
			count++;
	}

	return (count);
}

