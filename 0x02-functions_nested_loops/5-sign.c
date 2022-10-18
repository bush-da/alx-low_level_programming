#include "main.h"

/**
 * print_sign - prints sign according to input number
 * @n: takes number argument
 * Return: 1 if number is positive 0 if 0 -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
