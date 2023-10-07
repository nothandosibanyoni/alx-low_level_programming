#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* 
 * main - entry point
 * return: always 0 (success)
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d  and is greater than 5\n", m);
	if (m == 0)
	       printf("Last digit of %d and is 0\n", m);
	if (m < 6 && m != 0)
		printf("Last digit of %d and is less than 6 and not 0\n", m);
	return (0);
}
