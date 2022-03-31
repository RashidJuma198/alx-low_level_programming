#include "main.h"
<<<<<<< HEAD
#include "stdio.h"

/**
 * print_array - function with two argument
 * @a: first argument pointer int type
 * @n: second argument int type
 *
 * Description: prints n element of an array of integers
 * Return: na
=======
#include <stdio.h>

/**
 * print_array - Prints an input number of elements
 *               of an array of integers.
 *
 * @a: An array of integers.
 *
 * @n: The number of elements to be printed.
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
<<<<<<< HEAD
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
=======
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}

>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
	printf("\n");
}
