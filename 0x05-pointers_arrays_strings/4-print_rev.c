#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: string to print reverse
 * Return: 0
 */

void print_rev(char *s)
{
	int string = 0;
	int q;

	while (*s != '\0')
	{
		string++;
		s++;
	}
	s--;
	for (q = string; q > 0; q--)
	{
		_putchar(*s);
		s--;
	}
		_putchar('\n');
}
