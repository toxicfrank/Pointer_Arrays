#include "main.h"
/**
 * _puts - function that prints a string,
 * followed by a new line, to stdout.
 * __puts - function that prints a string,
 * followed by a new line, to stdout.
 * @str: pointer to a character
 * Return: string
 */

void _puts(char *str)
{
	unsigned int i, count = 0, str1;

	str1 = strlen(str + 1);

	for (i = 0; i < str1; i++)
	{
		if (*str != '\0')
		{
			count++;
		}
	}
	fprintf(stdout, "%s\n", str);
}

/* or one can write the function below to perform function as */
/* the one above */
void __puts(char *str)
{
	puts(str);
}
