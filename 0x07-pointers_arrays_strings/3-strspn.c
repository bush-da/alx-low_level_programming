#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: prefix substring
 * Return: number of byte consist only of bytes form accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, flag;

	i = j = 0;
	while (s[i + 1] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] != accept[j])
				flag = i;
			else
			{
				flag = 0;
				break;
			}
			j++;
		}
		if (flag != 0)
			return (flag);
		j = 0;
		i++;
	}

	return (i);
}
