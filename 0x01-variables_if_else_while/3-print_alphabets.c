#include <stdio.h>

/**
 * main - prints all uppercase and lowercase
 * alhabet
 * Return: 0 if there is no error
 */

int main(void)
{
	char c, C;

	c = 'a';
	C = 'A';

	while (C < 91)
	{
		while (c <= 122)
		{
			putchar(c);
			c++;
		}
		putchar(C);
		C++;
	}

	putchar('\n');

	return (0);
}
