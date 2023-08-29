#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in linked list
 * @h: linked list of type listint_t to be returned after being passed
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}

	return (k);
}

