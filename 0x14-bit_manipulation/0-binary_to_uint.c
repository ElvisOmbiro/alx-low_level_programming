#include "main.h"

/**
 * binary_to_uint - a function converting  binary number to unsigned int
 * @b:  points to a string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int g;
	unsigned int dec_num = 0;

	if (!b)
		return (0);

	for (g = 0; b[g]; g++)
	{
		if (b[g] < '0' || b[g] > '1')
			return (0);
		dec_num = 2 * dec_num + (b[g] - '0');
	}

	return (dec_num);
}

