#include "main.h"

/**
 * *_strcat - concatenates two strings overwriting the terminating null byte.
 * @dest: appends to
 * @src: appends from
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int q = 0;
	int a = 0;

	while (*(src + q) != '\0')
	{
		q++;
	}
	for ( ; a < q ; a++)
	{
		dest[a] = src[a];
	}
	dest[q] = '\0';
	return (dest);
}

