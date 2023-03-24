#include "main.h"

/**
 * _puts - A function that prints a string
 * @s: character to be printed
*/

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
