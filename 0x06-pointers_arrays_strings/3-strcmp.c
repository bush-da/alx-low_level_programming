#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: accept string argument
 * @s2: accept string argument
 * Return: compare value
 */

int _strcmp(char *s1, char *s2)
{
	int len1, len2, i;

	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (len1 != len2)
	{
		if (len1 > len2)
		{
			return ((s1[len1 - 1] + '0') - (s2[len2] + '0'));
		}
		else
		{
			return ((s1[len1] + '0') - (s2[len2 - 1] + '0'));
		}
	}
	else
	{
		for (i = len1 - 1; i >= 0; i--)
		{
			if (s1[i] == s2[i])
			{
				continue;
			}
			else
			{
				return ((s1[i] + '0') - (s2[i] + '0'));
				break;
			}
		}
		return ((s1[i + 1] + '0') - (s2[i + 1] + '0'));
	}
}
