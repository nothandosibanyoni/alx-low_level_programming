#include "main.h"

/**
  * print_chessboard - function that locates a substring
  * @a: function parameter declared
  * Return: Always 0.
  */

void print_chessboard(char (*a)[8])
{
	int q;
	int s;

	for (q = 0; q < 8; q++)
	{
	for (s = 0; s < 8; s++)
	putchar(a[q][s]);
	putchar('\n');
	}
}

