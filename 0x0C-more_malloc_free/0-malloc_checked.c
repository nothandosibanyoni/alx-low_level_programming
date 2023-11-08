#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  a function that allocates memory using malloc
 * @b: input function
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
