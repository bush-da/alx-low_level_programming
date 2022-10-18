#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabet bet 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, j;

	i = 0;
	j = 97;

	while (i < 10)
	{
		while (j < 122)
		{
			_putchar(j);
			j++;
		}
		j = 97;
		i++;
		_putchar('\n');
	}
	
}
