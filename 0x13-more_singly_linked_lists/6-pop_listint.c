#include "lists.h"

/**
 * pop_listint - function that deletes head node of list,returns the head node
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *dove;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	dove = (*head)->next;
	free(*head);
	*head = dove;

	return (num);
}

