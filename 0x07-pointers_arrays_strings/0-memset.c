#include "main.h"

/**
  * _memset - function that fills memory with a constant byte.
  * @b: The value used to fill the memory
  * @s: Function paramater
  * @n: Function parameter
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	s[q] = b;
	return (s);
}

