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
	for (temp = n, No_shift = 0; (temp >>= 1) > 0; No_shift++)
		;
	for (; shifts >= 0; No_shift--)
	{
		if ((n >> No_shift) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
