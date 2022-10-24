#include "main.h"

/**
 * _strcpy - copy string src to dest
 * @dest: destination of string
 * @src: source of string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[len] = '\0';

	return (dest);
}
