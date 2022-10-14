#include <stdio.h>

/**
 * main - prints base10
 * Return: 0 if there is no error
 */

int main(void)
{
	char c;

	c = 48;

	while (c <= 57)
	{
		if (c == 57)
		{
			putchar(c);
			break;
		}
		putchar(c);
		putchar(',');
		putchar(' ');
		c++;
	}

	return (0);
}
