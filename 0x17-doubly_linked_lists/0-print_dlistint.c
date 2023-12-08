#include "lists.h"

/**
 * print_dlistint - prints all elements of a distint list
 * @h: head pointer
 *
 * Return: Number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = NULL;
	int count;

	tmp = h;

	count = 0;

	while (tmp)
	{
		count++;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}

	return (count);
}
