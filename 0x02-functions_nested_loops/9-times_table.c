#include "main.h"

/**
 * times_table - prints times table
 * Return: void
 */

void times_table(void)
{
	int i, j, res;

	for (i = 0; i <=9; i++)
	{
		for (j = 0; j <=9; j++)
		{
			res = i * j;
			int temp = i * (j + 1);
			_putchar('0' + res);
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

