#include "main.h"

/**
<<<<<<< HEAD
 * _strlen - function with 1 argument
 * @s: char type pointer
 *
 * Description: strlen similiar function to return length
 * Return: string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
=======
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @s.
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
	{
		l++;
	}

	return (l);
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
}
