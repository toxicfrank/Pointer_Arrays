#include "main.h"

/**
 * _strcpy -  function that copies
 * the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: pointer to a char data type
 * @src: pointer to a char data type
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	if (dest == NULL)
	{
		return (NULL);
	}

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

/*inster a null byte at the end of the string*/
	dest[i] = '\0';

	return (dest);
}

/*Alternaive function can also be*/

/**
 * str_cpy - function that copies
 * the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @src: pointer to a character data type
 * @dest: pointer to a character data type
 * Return: pointer to dest
 */
char *str_cpy (char *dest, char *src)
{
	char *return_str = dest;
	if (dest == NULL)
	{
		return (NULL);
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (return_str);
}
