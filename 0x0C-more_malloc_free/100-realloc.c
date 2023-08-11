#include "main.h"
#include <stdlib.h>

/**
 * * _realloc -  a function that reallocates a memory block using malloc and fr
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int r;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (r = 0; r < new_size; r++)
			ptr1[r] = old_ptr[r];
	}

	if (new_size > old_size)
	{
		for (r = 0; r < old_size; r++)
			ptr1[r] = old_ptr[r];
	}

	free(ptr);
	return (ptr1);
}

