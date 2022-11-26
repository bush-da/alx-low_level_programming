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
	if (needle == NULL)
		return (haystack);
	while (haystack[i] != '\0')
	{
		if (needle[j] == haystack[i])
		{
			while (needle[j] != '\0')
			{
				if (needle[j] == haystack[i])
				{
					if (needle[j + 1] == '\0')
						return (haystack + (i - j));
					i++;
					j++;
				}
				else
				{
					break;
				}
			}
		}
		j = 0;
		i++;
	}
	return (NULL);
}
