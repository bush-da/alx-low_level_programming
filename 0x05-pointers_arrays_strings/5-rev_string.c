#include "main.h"

/**
 * rev_string - reverses a string
 * @s: accept argument pointer to char
 * Return: void
 */

void rev_string(char *s)
{
	int len, end, i;
	char temp;

	len = 0;
	while (s[len] != '\0')
		len++;
	end = len - 1;
	for (i = 0; i < end; i++)
	{
		temp = s[i];
		s[i] = s[end];
		s[end] = temp;
		end--;
	}
}
