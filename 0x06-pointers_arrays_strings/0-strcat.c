#include "main.h"

/**
<<<<<<< HEAD
*  * _strcat - concatenates two strings
*   * @dest: string to append to
*    * @src: string to add
*     *
*      * Return: a pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
=======
* _strcat - concatenates two strings
* @dest: string to be copied to
* @src: to be appended to end of dest
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
j = 0;

while (*(dest + i) != '\0')
{
i++;
j++;
}

i = 0;
while (*(src + i) != '\0')
{
dest[j] = src[i];
i++;
j++;
}
dest[j] = '\0';
return (dest);
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
}
