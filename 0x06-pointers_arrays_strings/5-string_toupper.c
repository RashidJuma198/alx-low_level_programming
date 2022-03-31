#include "main.h"
<<<<<<< HEAD

/**
*  * string_toupper - changes all lowercase letters of a string
*   * to uppercase
*    * @s: string to modify
*     *
*      * Return: the resulting string
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
=======
#include <stdio.h>

/**
 * string_toupper - check the code for Holberton School students.
 *@n : variable
 * Return: return
 */

char *string_toupper(char *n)
{
int i;
for (i = 0; n[i] != '\0'; i++)
{
if (n[i] >= 97 && n[i] <= 122)
{
n[i] = n[i] - 32;
}
}
return (n);
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
}
