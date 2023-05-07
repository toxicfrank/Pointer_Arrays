#include "main.h"
/**
 * print_rev -  function that prints a string,
 * in reverse, followed by a new line.
 * @s: pointer to a character
 * Return: void
 */

void print_rev(char *s)
{
	int str1, i;

	str1 = strlen(s + 1);

	for (i = 0; i < str1;)
	{
		while (s[i] != '\0')
		{
			i++;
		}
	}

	for (i -= 1; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
