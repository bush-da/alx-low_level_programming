#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: accept address of string argument
 * Return: pointer to a newly allocated space
 */

char *_strdup(char *str)
{
	int i;
	char *a;

	i = 0;
	while (str[i - 1] != '\0')
		i++;
	a = malloc(i);
	if (str == NULL || i == 0)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		a[i] = str[i];
		i++;
	}

	return (a);
}
