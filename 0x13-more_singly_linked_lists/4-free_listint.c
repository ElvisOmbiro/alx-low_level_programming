#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: listint_t list that's to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *dove;

	while (head)
	{
		dove = head->next;
		free(head);
		head = dove;
	}
}


