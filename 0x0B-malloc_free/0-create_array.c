#include "main.h"
#include <stdlib.h>
/**
 * create_array - A function that creates an array of chars and initializes it
 * @size: size of array
 * @c: char to assign
 * Description: create array of chars and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int J;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (J = 0; size > J; J++)
		str[J] = c;
	return (str);
}

