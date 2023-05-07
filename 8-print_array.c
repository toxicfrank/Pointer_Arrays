#include "main.h"

/**
 * print_array -  function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointer to an int data type
 * @n: integer value
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for ( i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
		if (a[i] == a[n - 1])
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
