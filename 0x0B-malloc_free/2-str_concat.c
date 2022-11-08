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
	unsigned int len1, len2;
	char *a, *temp;

	len1 = len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	a = malloc(len1 + len2 + 1);
	if (a == NULL)
		return (0);
	temp = a;
	while (*s1 != '\0')
		*temp++ = *s1++;
	while (*s2 != '\0')
		*temp++ = *s2++;

	return (a);
}
