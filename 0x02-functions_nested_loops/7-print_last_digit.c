#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @c: accepts argument
 * Return: the last digit
 */

int print_last_digit(int c)
{
	int x;

	x = c % 10;
	if (x < 0)
	{
		x *= -1;
		_putchar('0' + x);
	}
	else
	{
		_putchar('0' + x);
	}

	return (x);

}
