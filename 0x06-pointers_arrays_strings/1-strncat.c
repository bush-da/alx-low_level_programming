#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: accept string argument
 * @src: accept string argument
 * @n: accpet len of char to concatenate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
		len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
