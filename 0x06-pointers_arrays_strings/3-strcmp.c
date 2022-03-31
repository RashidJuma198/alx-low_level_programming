#include "main.h"
<<<<<<< HEAD

/**
*  * _strcmp - compares two strings
*   * @s1: first string to compare
*    * @s2: second string to compare
*     *
*      * Return: less than 0 if s1 is less than s2, 0 if they're equal,
*       * more than 0 if s1 is greater than s2
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
=======
#include <stdio.h>

/**
 * _strcmp - check the code for Holberton School students.
 *@s1 : variable
 *@s2 : variable
 * Return: Concatinated string.
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
int ii = 0;
while ((s1[i] == s2[ii]) && s1[i] != '\0' && s2[ii] != '\0')
{
i++;
ii++;
}
return (s1[i] - s2[ii]);
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
}
