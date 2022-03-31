#include "main.h"

/**
<<<<<<< HEAD
 * puts2 - function with one argument
 * @str: char type pointer
 *
 * Description: print one char out of 2 of a string
 * Return: na
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
=======
 * puts2 - Prints one char out of two of a string.
 *
 * @str: The string argument passed.
 */
void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i++])
		j++;

	for (i = 0; i < j; i += 2)
		_putchar(str[i]);

>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
	_putchar('\n');
}
