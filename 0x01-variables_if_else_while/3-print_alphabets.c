#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print alphabets
 * Return: Always 0
 */
int main(void)
{
	char dennis;

	for (dennis = 'a'; dennis <= 'z'; dennis++)
	{
		putchar(dennis);
	}
	for (dennis = 'A'; dennis <= 'Z'; dennis++)
	{
		putchar(dennis);
	}
	putchar('\n');
	return (0);
}
