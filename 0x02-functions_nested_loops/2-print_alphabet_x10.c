#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10
 * return: void
 */

void print_alphabet_x10(void);
{
	char q;
	int a = 0

	while (a <= 10)
	{
	for (q = 'a'; q <= 'z'; q++)
	{
	_putchar(q);
	}
	_putchar('\n')
	a++;
	}
}
