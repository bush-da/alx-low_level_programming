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
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	a = malloc(i + 1);
	i = 0;
	while (str[i] != '\0')
	{
		a[i] = str[i];
		i++;
	}

	return (a);
}
