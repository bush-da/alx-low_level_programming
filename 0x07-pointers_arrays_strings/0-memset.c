#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: bytes of the memory area pointed
 * @b: constant byte
 * @n: first n byte of memory area
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	d = 0;
	while (d < n)
	{
		s[d] = b;
		d++;
	}

	return (s);
}
