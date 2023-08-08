#include "main.h"
#include <stdlib.h>
#include <stdio.h>



/**
 * count_word - a function that splits a string into words.
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, y, w;

	flag = 0;
	w = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int j, p = 0, len = 0, words, y = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (j = 0; j <= len; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (y)
			{
				end = j;
				tmp = (char *) malloc(sizeof(char) * (y + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[p] = tmp - y;
				p++;
				y = 0;
			}
		}
		else if (y++ == 0)
			start = j;
	}

	matrix[p] = NULL;

	return (matrix);
}

