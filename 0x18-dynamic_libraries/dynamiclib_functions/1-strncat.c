#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int w;
	int d;

	w = 0;
	while (dest[w] != '\0')
	{
		w++;
	}
	d = 0;
	while (d < n && src[d] != '\0')
	{
	dest[w] = src[d];
	w++;
	d++;
	}
	dest[w] = '\0';
	return (dest);
}

