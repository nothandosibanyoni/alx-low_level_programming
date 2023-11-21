#include "lists.h"

/**
 * add_nodeint - puts on a new node at the start of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *q;

	q = malloc(sizeof(listint_t));
	if (!q)
	return (NULL);

	q->n = n;
	q->next = *head;
	*head = q;

	return (q);
}
