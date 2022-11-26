#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: is string to search for
 * @needle: string to be searched in heystack
 * Return: a pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = j = 0;
	while (haystack[i] != '\0')
	{
		if (needle[j] == haystack[i])
			return (haystack + i);
		i++;
	}
	return (NULL);
}
