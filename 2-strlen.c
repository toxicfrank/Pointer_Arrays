#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to a character
 * Return: int
 */

int _strlen(char *s)
{
	unsigned int i, str1;
	int count = 0;
	str1 = strlen(s);

	for(i = 0; i < str1; i++){
		if (*s != '\0')
		{
			count++;
		}
	}
	return (count);
}
