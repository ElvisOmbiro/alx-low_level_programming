#include "main.h"

/**
 * get_endianness - a function checking the endianness.
 * Return:0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int p = 1;
	char *c = (char *) &p;

	return (*c);
}

