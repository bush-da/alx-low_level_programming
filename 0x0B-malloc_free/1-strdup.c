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
	a = malloc(sizeof(str));
	if (str == NULL)
		return (NULL);
	while(str[i] != '\0')
	{
		a[i] = str[i];
		i++;
	}

	return (a);
}
