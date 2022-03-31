#include "main.h"
<<<<<<< HEAD

/**
*  * rot13 - encodes a string in rot13
*   * @s: string to be encoded
*    *
*     * Return: the resulting string
*/

char *rot13(char *s)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
=======
/**
 * rot13 - check the code for Holberton School students.
 *@n : variable
 * Return: return
 */

char *rot13(char *n)
{
int i;
int a;
int d;
char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; n[i] != '\0'; i++)
{
d = 1;
for (a = 0; a < 52; a++)
{
if (n[i] == b[a] && d == 1)
{
n[i] = c[a];
d = 0;
}
}
}
return (n);
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
}
