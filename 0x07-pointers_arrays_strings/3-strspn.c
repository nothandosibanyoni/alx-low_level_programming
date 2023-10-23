#include "main.h"

/**
  * _strspn -  function that gets the length of a prefix substring.
  * @s: Function parameter
  * @accept: Function parameter
  * Return: Always 0 (success)
  */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int _strspn(char *s, char *accept);
	unsigned int i = 0;
	int q;

	while (*s)
	{
	for (q = 0; accept[q]; q++)
	{
	if (*s == accept[q])
	{
	i++;
	break;
	}
	else if (accept[q + 1] == '\0')
	return (i);
	}
	s++;
	}
	return (i);
}
