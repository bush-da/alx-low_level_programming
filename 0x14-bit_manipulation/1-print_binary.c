#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: base 10 number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int temp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	temp = n;
	while (temp)
	{
		if (temp & n)
			_putchar('1');
		else
			_putchar('0');
		temp = temp >> 1;
	}
}
