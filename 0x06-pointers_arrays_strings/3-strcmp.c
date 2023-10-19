#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: function parameters
 * @s2: function parameters
 * return: s1,s2
 */

int _strcmp(char *s1, char *s2)
{
	int q = 0;

	while (s1[q] != '\0' && s2[q] != '\0')
	{
	if (s1[q] != s2[q])
	{
	return (s1[q] - s2[q]);
	}
	q++;
	}
	return (0);
}
