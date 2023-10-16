#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: reverse string
 * return: string reverse
 */

void rev_string(char *s)
{
	int q;
	int count = 0;

	for (q = 0; s[q] != '\0'; q++)
		count++;
	for (q = 0; q < count / 2; q++)
	{
		char a;

		a = s[q];
			s[q] = s[count - 1 - q];
			s[count - 1 - q] = a;
	}
}
