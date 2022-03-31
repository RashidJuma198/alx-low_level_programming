#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';
=======

/**
 * _strcpy - Copies a string
 * @dest: Pointer to the string array for copying
 * @src: Number of elements to extract
 *
 * Return: The dest pointer
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50

	return (dest);
}
