#include "main.h"

/**
 * cap_string -  capitalizes all words of a string
 * @q: fuction input
 * Return: 0
 */

char *cap_string(char *q)
{
	int count = 0;

	while (q[count])
	{
	while (!(q[count] >= 'a' && q[count] <= 'z'))
		count++;
	if (q[count - 1] == ' ' ||
	q[count - 1] == '\t' ||
	q[count - 1] == '\n' ||
	q[count - 1] == ',' ||
	q[count - 1] == ';' ||
	q[count - 1] == '.' ||
	q[count - 1] == '!' ||
	q[count - 1] == '?' ||
	q[count - 1] == '"' ||
	q[count - 1] == '(' ||
	q[count - 1] == ')' ||
	q[count - 1] == '{' ||
	q[count - 1] == '}' ||
	count == 0)
	q[count] -= 32;
	count++;
	}
	return (q);
}


