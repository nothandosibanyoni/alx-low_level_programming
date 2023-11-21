#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *q;
	listint_t *temp = *head;

	q = malloc(sizeof(listint_t));
	if (!q)
	return (NULL);

	q->n = n;
	q->next = NULL;

	if (*head == NULL)
	{
	*head = q;
	return (q);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = q;

	return (q);
}
