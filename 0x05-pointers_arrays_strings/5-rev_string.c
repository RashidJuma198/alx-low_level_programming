#include "main.h"

/**
<<<<<<< HEAD
 * rev_string - function with one argument
 * @s: char type argument
 *
 * Description: reversing a string
 * Return: na
 */
void rev_string(char *s)
{
	int i, k, tmp, len;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	len = i;
	i--;
	while (k < len / 2)
	{
		tmp = s[k];
		s[k] = s[i];
		s[i] = tmp;
		i--;
		k++;
=======
 * rev_string - Reverses a string.
 * @s: The argument string to be reversed.
 */
void rev_string(char *s)
{
	int l = 0, i = 0;
	char z;

	while (s[i++])
		l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		z = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = z;
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
	}
}
