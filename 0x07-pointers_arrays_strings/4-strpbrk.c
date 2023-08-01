#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int m;

		while (*s)
		{
			for (m = 0; accept[m]; m++)
			{
			if (*s == accept[m])
			return (s);
			}
		s++;
		}

	return ('\0');
}

