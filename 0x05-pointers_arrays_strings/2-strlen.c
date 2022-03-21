#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @s.
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
	{
		l++;
	}

	return (l);
}
