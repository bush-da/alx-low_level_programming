#include "main.h"

/**
 * main - prints all alphabet
 * Return: Always 0
 */

void print_alphabet(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

