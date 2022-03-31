#include "main.h"

/**
<<<<<<< HEAD
 * swap_int - function with two int type pointer argument
 * @a: 1st argument int type
 * @b: 2nd argument int type
 *
 * Description: Using pointer to change value of a and b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
=======
 * swap_int - Swaps the value of two integers.
 *
 * @a: First pointer argument.
 * @b: Second pointer argument.
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
}
