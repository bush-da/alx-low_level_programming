#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: base 10 number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int No_shift;

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
	No_shift = 0;
	while (temp > 0)
	{
		temp >>= 1;
		No_shift++;
	}
	while (No_shift >= 0)
	{
		if ((n >> No_shift) & 1)
			_putchar('1');
		else
			_putchar('0');
		No_shift--;
	}
}
