#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: accept string argument
 * @src: accept string argument
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len;

	len =  0;
	while (dest[len] != '\0')
		len++;
	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
