#include "hash_tables.h"
/**
 * hash_djb2 - implementation of  djb2 algorithm
 * @str: string used to generate the hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int li;
	int k;

	li = 5381;
	while ((k = *str++))
	{
		li = ((li << 5) + li) + k; /* li * 33 + k */
	}
	return (li);
}
