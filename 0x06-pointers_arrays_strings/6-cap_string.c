#include "main.h"

/**
 * cap_string - capitalize all first letter
 * @c: accept string argument
 * Return: c
 */

char *cap_string(char *c)
{
	int i, x;

	int key[] = {32, 9, 10, 44, 59, 33, 46, 34, 63, 40, 41, 123, 125};
	x = 0;
	i = 0;
	if (c[i] >= 97 && c[i] <= 122)
		c[i] = c[i] - 32;
	i++;
	while (c[i] != '\0')
	{
		while (key[x] != '\0')
		{
			if (c[i] == key[x])
			{
				if (c[i + 1] >= 97 && c[i + 1] <= 122)
				{
					c[i + 1] = c[i + 1] - 32;
				}
				break;
			}
			x++;
		}
		i++;
		x = 0;
	}
	return (c);
}
