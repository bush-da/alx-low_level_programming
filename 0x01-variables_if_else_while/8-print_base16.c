#include <stdio.h>

/**
 * main - print hexa values
 * Return: 0 if there is no error
 */

int main(void)
{
	char n, a;

	n = 48;
	a = 97;

	while (a <= 102)
	{
		while (n <= 57)
		{
			putchar(n);
			n++;
		}
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
