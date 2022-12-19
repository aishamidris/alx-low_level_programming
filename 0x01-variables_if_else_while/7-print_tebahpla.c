#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Reverse Alphabets
 * Return: Always 0
 */

int main(void)
{
	char dennis;

	for (dennis = 'z'; dennis >= 'a'; dennis--)
	{
		putchar(dennis);
	}
	putchar('\n');
	return (0);
}
