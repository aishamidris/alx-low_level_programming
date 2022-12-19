#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - alphabet
 * Return: Always 0
 */

int main(void)
{
	char dennis, e, q;

	e = 'e';
	q = 'q';

	for (dennis = 'a'; dennis <= 'z'; dennis++)
	{
		if (dennis != e && dennis != q)
			putchar(dennis);
	}
	putchar('\n');
	return (0);
}
