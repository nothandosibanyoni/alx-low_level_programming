#include "main.h"

/**
 * swap_int - swaps two values of integers
 * @a: swaps of integer
 * @b: swaps of integer
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;

}
