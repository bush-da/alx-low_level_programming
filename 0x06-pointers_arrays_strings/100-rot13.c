#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @c: accept string
 * Return: c
 */

char *rot13(char *c)
{
	int i, x;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghikllmNOPQRSTUVWXYZABCDEFGHIJKLM";
	for (i = 0; c[i] != '\0'; i++)
	{
		for (x = 0; a[x] != '\0'; x++)
		{
			if (c[i] == a[x])
			{
				c[i] = rot[x];
				break;
			}
		}

	}
	return (c);
}
