#include "main.h"

/**
 * _strspn - a function that gets (counts) the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns a pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *prefix = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = prefix;
		if (flag == 0)
			break;
	}
	return (count);
}
