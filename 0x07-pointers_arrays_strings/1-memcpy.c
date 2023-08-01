#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 * function copies n bytes from memory area src to memory area dest
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int j = n;

	for (; x < j; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}

