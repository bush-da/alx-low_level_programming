#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: frist string argument
 * @s2: second string argument
 * @n: number of byte concatnate to string 1 from stirng 2
 * Return: pointer two newly allocate space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	a = malloc(sizeof(char) * (i + n + 1));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		a[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n && s2[j] != '\0')
	{
		a[i] = s2[j];
		j++;
		i++;
	}
	a[i] = '\0';

	return (a);
}
