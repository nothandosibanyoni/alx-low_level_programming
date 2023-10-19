#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: function parameters
 * @n: function parameters
 * return: n,a
 */

void reverse_array(int *a, int n)
{
	int q;
	int p;

	for (q = 0; q < n--; q++)
	{
	p = a[q];
	a[q] = a[n];
	a[n] = p;
	}
}

