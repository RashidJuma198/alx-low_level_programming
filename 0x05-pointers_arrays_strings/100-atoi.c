<<<<<<< HEAD
#include "main.h"

/**
 * _atoi - function with one argument
 * @s: char type pointer argument
 *
 * Description: convert a string to an integer
 * Return: value of s
 */
int _atoi(char *s)
{
	int i, sign, numb;

	i = 0;
	sign = 1;
	numb = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				numb = (s[i] - '0') * sign + numb * 10;
				i++;
			}
			break;
		}
		i++;
	}
	return (numb);
=======
#include <stdio.h>
/**
 * _atoi - converts string to integer
 *
 * @s: string to convert from
 *
 * Return: integer from conversion
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char working = 0;

	while (*s)
	{
		if (*s == '-')
			sign = sign * -1;
		if (*s >= '0' && *s <= '9')
		{
			working = 1;
			total = total * 10 + *s - '0';
		}
		else if (*s < '0' || *s > '9')
		{
			if (working)
				break;
		}
		s++;
	}
	if (sign < 0)
		total = (-(total));
	return (total);
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
}
