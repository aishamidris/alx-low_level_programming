#include "main.h"

/**
 * print_alphabet_x10 -funtion that print 10 times the alphabet in lowercase.
 */
void print_alphabet_x10(void)
{
	char w;

	int x;

	for (x = 0; x < 10; x++)
	{
		for (w = 'a'; w <= 'z'; w++)

			_putchar(w);

		_putchar('\n');
	}
}
