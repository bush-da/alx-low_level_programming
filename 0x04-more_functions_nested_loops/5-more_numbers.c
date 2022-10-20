#include "main.h"

/**
 * print - prints two digit number
 * @n: accepts argument
 * Return: void
 */

void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * more_numbers - prints 10 times the number base10
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 0 && j <= 9)
				_putchar('0' + j);
			else
				print(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
