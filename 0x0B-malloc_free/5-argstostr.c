#include "holberton.h"
#include <stdlib.h>

/**
 * len - returns the length of a string
 * @s: is a pointer
 * Return: the length of a string
 */

int len(char *s)
{
	int x;

	for (x = 0; s[x] != 00; x++)
		;

	return (x);
}

/**
 * con - concatenates two strings
 * @dest: is a pointer
 * @src: is a pointer
 * Return: dest
 */

char *con(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != 00; x++)
		;

	for (y = 0; src[y] != 00;)
		dest[x++] = src[y++];

	dest[x] = 00;
	return (dest);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: is an integer
 * @av: is a doble pointer
 * Return: str
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int leng;
	int x;

	if (ac == 0 || av == 0)
		return (0);

	for (x = 0; x < ac; x++)
		leng = leng + len(av[x]) + 1;

	str = malloc(leng * sizeof(char));

	if (str == 0)
		return (0);

	for (x = 0; x < ac; x++)
	{
		con(str, av[x]);
		con(str, "\n");
	}

	return (str);
}
