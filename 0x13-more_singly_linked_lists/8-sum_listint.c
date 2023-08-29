#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *add = head;

	while (add)
	{
		sum += add->n;
		add = add->next;
	}

	return (sum);
}

