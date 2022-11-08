#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: accept the first string address
 * @s2: accept the second string address
 * Return: concatenated string address
 */

char *str_concat(char *s1, char *s2)
{
	int i, tot, len1, len2;
	char *a;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	tot = len1 + len2 + 1;
	a = malloc(tot);
	i = 0;
	while (*s1 != '\0')
	{
		a[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		a[i] = *s2;
		s2++;
		i++;
	}
	a[i] = '\0';

	return (a);
}
