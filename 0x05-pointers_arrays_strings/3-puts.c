#include "main.h"

/**
<<<<<<< HEAD
 * _puts - function with one argument
 * @str: one char type argument
 *
 * Description: print a string follow by a new line to stdout
 * Return: none
=======
 * _puts - Prints a string to stdout.
 *
 * @str: The string to be printed.
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
 */
void _puts(char *str)
{
	while (*str)
<<<<<<< HEAD
	{
		_putchar(*str);
		str++;
	}
=======
		_putchar(*str++);

>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
	_putchar('\n');
}
