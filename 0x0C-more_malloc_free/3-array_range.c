#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: is an integer
 * @max: is an integer
 * Return: p or NULL
 */

int *array_range(int min, int max)
{
	int *p, x;

	if (min > max)
		return (0);

	p = malloc((max - min + 1) * sizeof(int));
	if (p == 0)
		return (0);

	for (x = 0; min <= max; x++, min++)
		p[x] = min;

	return (p);
}
