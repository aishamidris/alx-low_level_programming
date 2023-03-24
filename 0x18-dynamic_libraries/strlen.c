#include "main.h"
/**
 * _strlen - calculate the length of a string.
 * @s: pointer to length of a string.
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++ != '\0')
		length = length + 1;

	return (length);
}
