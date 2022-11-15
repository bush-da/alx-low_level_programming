#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: prefix substring
 * Return: number of byte consist only of bytes form accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag;

	i = j = 0;
	if (*s == 0 || *accept == 0)
		return (0);
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] != accept[j])
				flag = i;
			else
			{
				flag = -1;
				break;
			}
			j++;
		}
		if (flag != -1)
			return (flag);
		j = 0;
		i++;
	}

	return (i);
}
