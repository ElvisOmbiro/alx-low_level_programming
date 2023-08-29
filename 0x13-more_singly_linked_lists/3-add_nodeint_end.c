#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of list.
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *temp = *head;

	p = malloc(sizeof(listint_t));
	if (!p)
		return (NULL);

	p->n = n;
	p->next = NULL;

	if (*head == NULL)
	{
		*head = p;
		return (p);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = p;

	return (p);
}

