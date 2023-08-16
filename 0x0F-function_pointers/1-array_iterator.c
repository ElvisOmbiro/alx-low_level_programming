#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter on each element of an array.
 * @array: array
 * @size: how many elements are to be printed
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int h;

	if (array == NULL || action == NULL)
		return;

	for (h = 0; h < size; h++)
	{
		action(array[h]);
	}
}

