#include "main.h"
#include <stdio.h>

/**
  *leet - main function
  * @p: Function parameter
  *Return: value of p
 */

char *leet(char *p)
{
	int q;
	int e;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (q = 0; p[q] != '\0'; q++)
	{
	for (e = 0; e < 10; e++)
	{
	if (p[q] == s1[e])
	{
	p[q] = s2[e];
	}
	}
	}
	return (p);
}

