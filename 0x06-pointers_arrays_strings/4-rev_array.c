#include "main.h"
<<<<<<< HEAD

/**
*  * reverse_array - reverses an array of integers
*   * @a: array to be reversed
*    * @n: number of elements in the array
*/

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
=======
#include <stdio.h>

/**
 * reverse_array - check the code for Holberton School students.
 *@n : variable
 *@a : variable
 */

void reverse_array(int *a, int n)
{
int i;
int tem;
int b = n;
if (n % 2 == 0)
{
for (i = 0; i < n / 2; i++)
{
tem = a[i];
a[i] = a[b - 1];
a[b - 1] = tem;
b--;
}
}
else if (n % 2 == 1)
{
for (i = 0; i < (n - 1) / 2; i++)
{
tem = a[i];
a[i] = a[b - 1];
a[b - 1] = tem;
b--;
}
}
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
}
