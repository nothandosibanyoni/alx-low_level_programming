#include "main.h"

/**
 * main - checks for uppercase character.
 * Return: print 1 if c uppercase or 0 for anything.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
