#include <stdio.h>

/**
 * main - prints base10
 * Return: 0 if there is no error
 */

int main(void)
{
	int c;

	c = 48;

	while (c <= 57)
	{
		putchar(c);
		if (c == 57)
			break;
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar('\n');

	return (0);
}
