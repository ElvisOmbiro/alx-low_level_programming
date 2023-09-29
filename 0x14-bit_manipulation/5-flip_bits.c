#include "main.h"

/**
 * flip_bits - a function returning the number of bits you would need
 * just to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int s, count = 0;
	unsigned long int existing;
	unsigned long int unknown = n ^ m;

	for (s = 63; s >= 0; s--)
	{
		existing = unknown >> s;
		if (existing & 1)
			count++;
	}

	return (count);
}

