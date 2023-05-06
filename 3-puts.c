#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 * @s: pointer to a character
 * Return: string in reverse
 */

void _puts(char *str)
{
	unsigned int i, count = 0, str1;
	str1 = strlen(str);

	for (i = 0; i < str1; i++)
	{
		if (*str != '\0')
		{
			i++;
			count ++;
		}
	}
	printf("%s\n", str);
}
void __puts(char *str)
{
	puts(str);
}
