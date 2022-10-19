
#include "main.h"

/**
 * print - prints tow digit number
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
 * times_table - prints times table
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, res;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (j == 0)
				{
					_putchar('0');
					
				}
				else if (res < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					print(res);
				}
				else if (res > 9 && res < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					print(res);
				}
				else if (res > 99 && res < 1000)
				{
					_putchar(',');
					_putchar(' ');
					print(res);
				}
			}
		_putchar('\n');
		}
	}
}
