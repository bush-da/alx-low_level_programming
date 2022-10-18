#include "main.h"

/**
 * jack_bauer - prints every min of a day
 * Return: void
 */

void jack_bauer(void)
{
	int i, j, k, l;

	i = j = k = l = 0;

	while (i <= 2)
	{
		while (j <= 9)
		{
			while (k <= 5)
			{
				while (l <= 9)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
					l++;
				}
				k++;
				l = 0;
			}
			j++;
			k = 0;
			l = k;
			if (i == 2 && j == 4)
				break;
		}
		i++;
		k = 0;
		j = 0;
		l = 0;
	}
}
