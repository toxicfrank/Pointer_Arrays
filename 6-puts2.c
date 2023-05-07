#include "main.h"

/**
 * puts2 -  function that prints every other character of a string,
 * starting with the first
 * character, followed by a new line.
 * @str: pointer to a char data type
 */

void puts2(char *str)
{
	int i = 0;
	int length = strlen(str);

	for (; i < length; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
