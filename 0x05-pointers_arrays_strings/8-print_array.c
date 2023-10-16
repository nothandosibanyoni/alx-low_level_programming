#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers separate numbers comma
 * @a: array name
 * @n: dislay order and separate with comma
 * Return: a and n
 */

void print_array(int *a, int n)
{
	int q;

	for (q = 0; q < n; q++)
	{
	printf("%d", a[q]);
	if (q != (n - 1))
	{
	printf(",");
	}
	}
	printf("\n");
}
