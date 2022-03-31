#include "main.h"
<<<<<<< HEAD

/**
*  * leet - encodes a string in 1337
*   * @s: string to be encoded
*   *    *
*     * Return: the resulting string;
*/

char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s + i))
				*(s + i) = b[j];
		}
	}
	return (s);
=======
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
/**
 * leet - check the code for Holberton School students.
 *@n : variable
 * Return: return
 */

char *leet(char *n)
{
int i;
int a;
char b[11] = "aAeEoOtTlL";
char c[11] = "4433007711";

for (i = 0; n[i] != '\0'; i++)
{
for (a = 0; a <= 9; a++)
{
if (b[a] == n[i])
{
n[i] = c[a];
}
}
}
return (n);
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
}
