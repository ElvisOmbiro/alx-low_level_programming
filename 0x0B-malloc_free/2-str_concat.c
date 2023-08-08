#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int j, p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = p = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[p] != '\0')
		p++;
	conct = malloc(sizeof(char) * (j + p + 1));

	if (conct == NULL)
		return (NULL);
	j = p = 0;
	while (s1[j] != '\0')
	{
		conct[j] = s1[j];
		j++;
	}
	while (s2[p] != '\0')
	{
		conct[j] = s2[p];
		j++, p++;
	}
	conct[j] = '\0';
	return (conct);
}

