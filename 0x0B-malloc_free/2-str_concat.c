#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: is a pointer
 * @s2: is a pointer
 * Return: cat or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int x, y, z, len;
	char *cat;

	if (s1 == 00)
		x = 0;
	else
		for (x = 0; s1[x] != 00; x++)
			;

	if (s2 == 00)
		y = 0;
	else
		for (y = 0; s2[y] != 00; y++)
			;

	len = x + y;
	cat = malloc(len * sizeof(char) + 1);

	if (cat == 00)
		return (0);

	for (z = 0; z < x; z++)
		cat[z] = s1[z];

	for (z = 0; z < y; z++)
		cat[x + z] = s2[z];

	cat[x + y] = 00;
	return (cat);
}
