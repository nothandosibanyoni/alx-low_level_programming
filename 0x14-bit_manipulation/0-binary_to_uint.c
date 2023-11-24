#include "main.h"

/**
 * binary_to_uint - function changes a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int q;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (q = 0; b[q] != '\0'; q++)
	{
		if (b[q] != '0' && b[q] != '1')
			return (0);
	}
	for (q = 0; b[q] != '\0'; q++)
	{
		num <<= 1;
		if (b[q] == '1')
			num += 1;
	}
	return (num);
}
