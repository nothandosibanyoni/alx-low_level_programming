#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list
 * @h: function parameter
 *
 * Return: the printed number nodes
 */

size_t print_list(const list_t *h)
{
	size_t q = 0;

	while (h)
	{
		if (!h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		q++;
		h = h->next;
	}

	return (s);
}
