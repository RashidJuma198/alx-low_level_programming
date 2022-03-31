#include "main.h"

/**
<<<<<<< HEAD
 * print_rev - function with 1 argument
 * @s: 1st argument char type
 *
 * Description: function that prints a string in reverse
 * Return: na
 */
void print_rev(char *s)
=======
 * _strlen - Prints length of string.
 *
 * @s: character argument passed.
 *
 * Return: The length of string.
 */
int _strlen(char *s)
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
<<<<<<< HEAD
	i -= 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	};
=======
	return (i);
}

/**
 * print_rev - Prints a string in reverse.
 *
 * @s: Set of characters
 *
 */

void print_rev(char *s)
{
	int l;
	int i;

	l = _strlen(s);
	i = l;

	while (i > 0)
	{
		i--;
		_putchar(*(s + i));
	}
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
	_putchar('\n');
}
