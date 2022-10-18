#include "main.h"

/**
 * print_to_98 - print number starting form given number
 * to 98
 * @c: accept argument
 * Return: void
 */

void print(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	
	if (n/10)
		print(n/10);

	_putchar(n%10 + '0');
}

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			print(n);
			if ( n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		n++;
		}
	}
	else
	{
		while ( n >= 98)
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
