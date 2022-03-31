<<<<<<< HEAD
#include "main.h"
#include <stdio.h>

/**
  * main - Prints a Fizz Buzz program
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
=======
#include <stdio.h>
/**
 * main - check the code for programming students.
 *
 * Return: void.
 */

int main(void)
{

	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
		{
			printf("Buzz");
		}
		else
		{
<<<<<<< HEAD
			printf("%d", x);
		}

		if (x != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
=======
			printf("%i", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);

>>>>>>> bb26e3dc7f6b158111aa477113568838d1111e50
}
