#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of char's
 * @src: source of char's
 * @n: number of char's to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
