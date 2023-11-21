#include "lists.h"

/**
 * free_listint - lets a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *q;

	while (head)
	{
	q = head->next;
	free(head);
	head = q;
	}
}
