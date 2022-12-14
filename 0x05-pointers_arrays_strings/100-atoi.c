#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: accept argument pointer to char
 * Return: integer or 0 if there is error
 */

int _atoi(char *s)
{
	int sign, i;
	int res;

	res = 0;
	sign = 0;
	i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign++;
			if (s[i + 1] >= 48 && s[i + 1] <= 57)
				break;
		}

	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			res = res * 10 + s[i] - '0';
			if (s[i + 1] == ' ')
				break;
		}
	}

	if ( (sign >= 1 && sign % 2 != 0))
		_putchar('-');
	return (res);
}
