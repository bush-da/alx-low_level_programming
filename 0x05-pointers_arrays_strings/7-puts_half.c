#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: accept argument pointer to char
 * Return: void
 */

void puts_half(char *str)
{
	int len, half, i;

	len = 0;
	while (str[len] != '\0')
		len++;
	half = len / 2;

	for (i = half; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
