#include <stdio.h>
/**
 * main - entry point
 * return: always 0 
 */

int main(void)
{
		char t;

		t = 'a';
		while 
			(t <= 'Z') {
				if ((t != 'q' && t != 'e') && t <= 'Z')
					putchar(t);
				t++;
			}
		putchar('\n');
		return (0);
}
