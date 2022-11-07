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
	int i, j;
	char *a;


	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	a = malloc(sizeof(s1) + sizeof(s2));

	i = j = 0;
	while (s1[i] != '\0')
	{
		a[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		a[i] = s2[j];
		j++;
		i++;
	}
	a[i + 1] = '\0';

	return (a);
}
