#include "main.h"

/**
 * _strpbrk - searches a string of any of a set of bytes
 * @s: string that is searched
 * @accept: bytes to search in s
 * Return: pointer to the bytes in s that matches if not NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = j = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
