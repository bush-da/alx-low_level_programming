#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @c: accept string
 * Return: c
 */

char *rot13(char *c)
{
	int i, x;
	char key[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char value[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (c[i] != '\0')
	{
		for (x = 0; key[x] != '\0'; x++)
		{
			if (c[i] == key[x])
			{
				c[i] = value[x];
				break;
			}
		}
		i++;
	}
	return (c);
}
