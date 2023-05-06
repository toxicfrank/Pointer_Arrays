#include "main.h"
#define stdout stdout
/**
 * _puts - function that prints a string,
 * followed by a new line, to stdout.
 * __puts - function that prints a string,
 * followed by a new line, to stdout.
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
	fprintf(stdout, "%s\n", str);
}

// or one can write the function below to perform function as
//the one above
void __puts(char *str)
{
	puts(str);
}
