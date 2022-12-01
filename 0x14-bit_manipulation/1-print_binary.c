#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: base 10 number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i;
	int count;
	unsigned long int current;

	count = 0;
	i = 63;
	while (i >= 0)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
		i--;
	}
	if (!count)
		_putchar('0');
}
