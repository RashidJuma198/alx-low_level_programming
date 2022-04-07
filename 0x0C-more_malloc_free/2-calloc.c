#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: is an unsigned int
 * @size: is an unsigned int
 * Return: p or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *p;

	if (nmemb == 0 || size == 0)
		return (0);

	p = malloc(nmemb * size);
	if (p == 0)
		return (0);

	for (x = 0; x < nmemb * size; x++)
		p[x] = 0;

	return (p);
}
