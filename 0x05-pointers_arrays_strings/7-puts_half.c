#include "main.h"

/**
<<<<<<< HEAD
 * puts_half - function with one argument
 * @str: char type
 *
 * Description: prints half of a string
 * Return: na
 */
void puts_half(char *str)
{
	int i, len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	if (len % 2 != 0)
		len = (len + 1) / 2;
	else
		len /= 2;
	while (len < i)
	{
		len++;
		_putchar(*(str + len - 1));
	}
=======
 * puts_half - Prints half of a string.
 *
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int i = 0, l = 0, n;

	while (str[i++])
		l++;

	if ((l % 2) == 0)
		n = l / 2;

	else
		n = (l + 1) / 2;

	for (i = n; i < l; i++)
		_putchar(str[i]);

>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
	_putchar('\n');
}
