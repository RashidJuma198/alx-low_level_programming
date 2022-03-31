#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: is a pointer
 * @src: is a pointer
 * @n: is an unsigned int
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *x = (char *)dest;
	char *y = (char *)src;
	unsigned int z;

	for (z = 0; z < n; z++)
		x[z] = y[z];

	return (dest);
}
