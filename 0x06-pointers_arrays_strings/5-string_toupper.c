#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @n: function input
 * return: string
 */

char *string_toupper(char *n)
{
	int q;

	q = 0;

	while (n[q] != '\0')
	{
	if (n[q] >= 'a' && n[q] <= 'z')
	n[q] = n[q] - 32;
	q++;
	}
	return (n);
}

