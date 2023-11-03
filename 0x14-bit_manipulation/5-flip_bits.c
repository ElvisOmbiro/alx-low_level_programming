#include "main.h"

/**
 * flip_bits - a function returning the number of bits needed to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int existing;
	unsigned long int unknown = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		existing = unknown >> k;
		if (existing & 1)
			count++;
	}

	return (count);
}

