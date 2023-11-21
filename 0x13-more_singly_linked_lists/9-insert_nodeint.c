#include "lists.h"

/**
 * insert_nodeint_at_index - puts a new node in a linked lists
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int q;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}

	for (q = 0; temp && q < idx; q++)
	{
	if (q == idx - 1)
	{
	new->next = temp->next;
	temp->next = new;
	return (new);
	}
	else
	temp = temp->next;
	}

	return (NULL);
}
