#include "main.h"

/**
 * print - number greater than 1 digit
 * @n: accepts number argument
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
 * natural - prints all multiple of 3 or 5
 * Return: void
 */

void natural(void)
{
	int i, sum;

	i = 1023;
	sum = 0;

	while (i >= 1)
	{
		if (i % 5 == 0 || i % 3 ==0 )
		{
			sum += i;
		}
		i--;
	}
	print(sum);
}

