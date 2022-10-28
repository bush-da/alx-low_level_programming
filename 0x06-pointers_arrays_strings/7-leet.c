#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: accept string argument
 * Return: c;
 */

char *leet(char *c)
{
	int i, x;
	char *key = "aAeEoOtTlL";
	int value[] = {4,4,3,3,0,0,7,7,1,1};

	i = 0;
	while (c[i] != '\0')
	{
		for (x = 0; key[x] != '\0'; x++)
		{
			if (c[i] == key[x])
			{
				c[i] = value[x] + '0';
				break;
			}
		}
		i++;
	}
	return (c);
}
