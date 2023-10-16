#include "main.h"

/**
 * *_strcpy - copies the string pointed and terminate null byte
 * @dest: copying to
 * @src: copying from
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int q = 0;
	int h = 0;

	while (*(src + q) != '\0')
	{
		q++;
	}
	for ( ; h < q ; h++)
		dest[h] = src[h];
	dest[q] = '\0';
	return (dest);
}
