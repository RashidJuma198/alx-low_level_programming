#include "main.h"

/**
<<<<<<< HEAD
*  * _strncat - concatenates n bytes from a string to another
*   * @dest: destination string
*    * @src: source string
*     * @n: number of bytes of str to concatenate
*      *
*       * Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
=======
* _strncat - Concatenates two strings
* @dest: to be concatenated to
* @src: to be concatenated to dest
* @n: number of bytes
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
j = 0;
while (*(dest + i) != '\0')
{
j++;
i++;
}

i = 0;
while (*(src + i) != *(src + n))
{
*(dest + j) = *(src + i);
i++;
j++;
}
*(dest + j) = '\0';
return (dest);
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
}
