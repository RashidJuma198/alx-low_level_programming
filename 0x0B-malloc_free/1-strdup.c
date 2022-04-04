#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: is a pointer
 * Return: z or NULL
 */

char *_strdup(char *str)
{
	int x, y;
	char *z;

	if (str == 0)
		return (0);

	for (x = 0; str[x] != 00; x++)
		;

	z = malloc(x * sizeof(char) + 1);

	if (z == 0)
		return (0);

	for (y = 0; y <= x; y++)
		z[y] = str[y];

	z[y] = 00;
	return (z);
}
