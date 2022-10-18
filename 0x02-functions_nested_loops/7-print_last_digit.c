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
	putchar(x + '0');

	return (x);
}
