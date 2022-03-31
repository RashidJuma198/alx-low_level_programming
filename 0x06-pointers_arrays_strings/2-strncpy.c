#include "main.h"

/**
<<<<<<< HEAD
*  * _strncpy - copies a string
*   * @dest: destination string
*    * @src: source string
*     * @n: number of bytes to copy
*      *
*       * Return: pointer to the resulting string
*/
=======
 * _strncpy - two words
 * @dest : pointer to char params
 * @src : pointer to char params
 * @n : int params
 * Return: *dest
 */
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50

char *_strncpy(char *dest, char *src, int n)
{
	int i;

<<<<<<< HEAD
	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

=======
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
	return (dest);
}
