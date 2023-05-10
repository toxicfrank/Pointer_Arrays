#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to a char data type
 * @src: pointer to a char data type
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	/*char *ch = strcat(dest, src);*/
	/*return (ch);*/

	int i = 0;
	int len1, len2;
	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len1; i++)
	{
		dest[len1 + i] = src[len2];
	}
	return (dest);
}
