#include "main.h"

/**
 * _strncpy -  copies a string
 * @dest: function parameters
 * @src: function parameters
 * @n: function parameters
 * return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int q = 0;

	while (q < n && src[q] != '\0')
	{
	dest[q] = src[q];
	q++;
	}
	while (q < n)
	{
	dest[q] = '\0';
	q++;
	}
	return (dest);
}
