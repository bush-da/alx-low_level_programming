#include <stdio.h>

/**
 * main - print base 10
 * Return: 0 if there is no error
 */

int main(void)
{
	int x;

	x = 48;

	while (x <= 57)
	{
		putchar(x);
		x++;
	}

	putchar('\n');

	return (0);
}
