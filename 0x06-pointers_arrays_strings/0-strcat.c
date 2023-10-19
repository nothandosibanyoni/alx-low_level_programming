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

	while (*(dest[q]) != '\0')
	{
		q++;
	}
	while (*(src[a]) != '\0')
	{
		a++
		dest[q] = src[a];
	}
	dest[q] = '\0';
	return (dest);
}

