#include "main.h"

/**
 * print - prints tow digit number
 * times_table - prints times table
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

void times_table(void)
{
	int i, j, res, temp;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			temp = i * (j + 1);
			print(res);
			if (j != 9)
			{
				if (temp > 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}

