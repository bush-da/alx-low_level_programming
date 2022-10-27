#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: accept string argument
 * @s2: accept string argument
 * Return: 0 if the s1 and s2 equal
 */

int _strcmp(char *s1, char *s2)
{
	int i, f;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	f = s1[i] - s2[i];
	return (f);
}
