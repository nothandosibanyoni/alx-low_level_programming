#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: inputs parameters
 * @src: inputs parameters
 * @n: inputs parameters
 * return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int q = 0;
	int a = 0;

	while (dest[q] != '\0')
	{
	q++;
	}
	while (a < n && src[a] != '\0')
	{
	dest[q] = src[a];
	q++;
	a++;
	}
	dest[q] = '\0';
	return (dest);
}
