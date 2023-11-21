#include "lists.h"

/**
 * free_listint2 - lets a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *q;

	if (head == NULL)
	return;

	while (*head)
	{
	q = (*head)->next;
	free(*head);
	*head = q;
	}

	*head = NULL;
}
