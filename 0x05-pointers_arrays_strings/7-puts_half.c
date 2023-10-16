#include "main.h"

/**
 * puts_half - print the second half of the string if odd print
 * @str: print if number is odd
 * return: n
 */

void puts_half(char *str)
{
	int q, n, string;

	string = 0;

	for (q = 0; str[q] != '\0'; q++)
		string++;

	n = (string / 2);

	if ((string % 2) == 1)
		n = ((string + 1) / 2);

	for (q = n; str[q] != '\0'; q++)
		_putchar(str[q]);
	_putchar('\n');
}


