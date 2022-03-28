#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: is a pointer
 * @b: is a char
 * @n: is an unsigned int
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; n--)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
