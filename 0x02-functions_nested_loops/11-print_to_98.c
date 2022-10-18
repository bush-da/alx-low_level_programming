#include "main.h"

/**
 * print_to_98 - print number starting form given number
 * @i: accept argument for print_to_98 function
 * print - print two digit numbers
 * @i: accepts argument for print function
 * to 98
 * @c: accept argument
 * Return: void
 */

void print(long i)
{
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}

	if (i / 10)
		print(i / 10);

	_putchar(i % 10 + '0');
}

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			print(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			print(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');
}
