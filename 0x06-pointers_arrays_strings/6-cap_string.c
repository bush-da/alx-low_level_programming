#include "main.h"

/**
 * cap_string - capitalize all first letter
 * @c: accept string argument
 * Return: c
 */

char *cap_string(char *c)
{
	int i = 0;
	int x= 0;
	int key[] = {32, 9, 10, 44, 59, 33, 46, 34, 63, 40, 41, 123, 125};

	while (c[i] != '\0')
	{
		while (key[x] != '\0')
		{
			if (c[i] == key[x])
			{
				if (c[i + 1] >= 97 && c[i + 1] <= 122)
					c[i + 1] = c[i + 1] - 32;
				if (c[i] == key[1])
					c[i] = key[0];
				break;
			}
			x++;
		}
		i++;
		x = 0;
	}
	return (c);
}
