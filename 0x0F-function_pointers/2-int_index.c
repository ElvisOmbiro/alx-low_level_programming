#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to function of one of the 3 in the main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}

