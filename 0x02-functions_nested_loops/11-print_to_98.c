#include "main.h"

/**
 * print - print two digit numbers
 * @i: accepts argument for print function
 * Return: void
 */

void print(int i)
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
/**
 * print_to_98 - prints number till 98
 * @n: accept argument
 * Return: void
 */
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
