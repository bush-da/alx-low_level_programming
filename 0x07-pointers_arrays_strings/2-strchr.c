#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 * @s: string to locates a character
 * @c: character to locate in string
 * Return: pointer to first occurrence or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s = s + 1;
	}
	return (NULL);
}
