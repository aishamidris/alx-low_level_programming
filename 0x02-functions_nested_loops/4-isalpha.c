#include "main.h"

/**
 * _isalpha - functions that check for alphabetical character
 * @c: An input Charcter
 * Return: Always 1
 */
int _isalpha(int c)
{
	char dennis, den;

	int small = 0;

	for (dennis = 'a'; dennis <= 'z'; dennis++)
	{
		for (den = 'A'; den <= 'Z'; den++)
		{
			if (c == dennis ||  c == den)

				small = 1;
		}
	}

	return (small);
}
