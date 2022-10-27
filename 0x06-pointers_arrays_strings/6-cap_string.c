#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: accept string argument
 * Return: c
 */

char *cap_string(char *s)
{
	int i, x;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	while (s[i] != '\0')
	{
		for (x = 0; x < 13; x++)
		{
			if (s[i] == a[x])
			{
				if ((s[i + 1] >= 97 && s[i + 1] <= 122))
					s[i + 1] = s[i + 1] - 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
