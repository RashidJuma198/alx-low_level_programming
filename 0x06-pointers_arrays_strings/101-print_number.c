<<<<<<< HEAD
#include "main.h"

/**
*  * print_number - prints an integer;
*   * @n: integer to be printed;
*/

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
=======
/*
 * File: 101-print_number.c
 * Auth: Brennan D Baraban
 */

#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
}
