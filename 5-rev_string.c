#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: pointer to a char data type
 * Return: void
 */
void rev_string(char *s)
{
	char ch;
	int i = 0;
	int length = strlen(s);
	int mid = length / 2;

	for (; i < mid; i++)
	{
		ch = s[i];

		s[i] = s[length - 1 - i];

		s[length - 1 - i] = ch;
	}
}
