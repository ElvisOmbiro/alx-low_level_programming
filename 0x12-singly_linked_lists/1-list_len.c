#include <stdlib.h>
#include "lists.h"


/**
 * list_len -a function that returns the number of elements in a linked list_t list.
 * @h: a pointer to the list_t list
 *
 * Return: the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t r = 0;

	while (h)
	{
		r++;
		h = h->next;
	}
	return (r);
}

