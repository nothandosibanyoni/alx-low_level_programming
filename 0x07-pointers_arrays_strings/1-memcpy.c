#include "main.h"

/**
  * _memcpy - function that copies memory area
  * @src: input parameter
  * @dest: input parameter
  * @n: input parameter
  * Return: Copied memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
	dest[q] = src[q];
	}
	return (dest);
}

