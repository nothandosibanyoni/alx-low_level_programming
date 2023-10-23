#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: function parameter
 * @c: function parameter
 * return: 0
 */

char *_strchr(char *s, char c)
{
	int q;

	for (q = 0; s[q] >= '\0'; q++)
	{
	if (s[q] == c)
	return (s + q);
	}
	return (0);
}

