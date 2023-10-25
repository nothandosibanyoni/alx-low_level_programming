#include "main.h"

/**
  * _pow_recursion - function that returns the value.
  * @x: input parameter
  * @y: input parameter
  * Return: value
  */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, (y - 1)));

	return (0);
}
