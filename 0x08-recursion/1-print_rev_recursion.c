#include "main.h"
/**
 * print _rev_recursion - prints a string.
 * followed by a new line.
 * @s:an input string to printing.
 * Return: no return.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
