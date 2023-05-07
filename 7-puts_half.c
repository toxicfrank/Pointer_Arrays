#include "main.h"

/**
 * puts_half - function should print the second half of the string
 * @str: pointer to a char data type
 * Return: void
 */

void puts_half(char *str)
{
	int length_of_the_string = strlen(str);
	int i, n;
	n = (length_of_the_string - 1) / 2;

	for (i = n + 1; i < length_of_the_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
