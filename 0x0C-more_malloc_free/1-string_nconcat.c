#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: is a pointer
 * @s2: is a pointer
 * @n: is an unsigned int
 * Return: str or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int l1, l2, l, x;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	l1 = len(s1);
	l2 = len(s2);

	if (n >= l2)
		n = l2;

	l = (l1 + n) + 1;
	str = malloc(l * sizeof(char));

	if (str == 0)
		return (0);

	for (x = 0; x < l1; x++)
		str[x] = s1[x];

	for (x = 0; x < n; x++)
		str[l1 + x] = s2[x];

	str[l1 + n] = 00;
	return (str);
}


/**
 * len - returns the length of a string
 * @s: is a pointer
 * Return: x
 */

int len(char *s)
{
	int x;

	for (x = 0; s[x] != 00; x++)
		;

	return (x);
}
