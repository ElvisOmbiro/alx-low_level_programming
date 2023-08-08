#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int k, p, x = 0, j = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (k = 0; k < ac; k++)
	{
		for (p = 0; av[k][p]; p++)
			j++;
	}
	j += ac;

	str = malloc(sizeof(char) * j + 1);
	if (str == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
	for (p = 0; av[k][p]; p++)
	{
		str[x] = av[k][p];
		x++;
	}
	if (str[x] == '\0')
	{
		str[x++] = '\n';
	}
	}
	return (str);
}

