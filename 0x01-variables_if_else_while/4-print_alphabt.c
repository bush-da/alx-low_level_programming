#include <stdio.h>

/**
 * main - prints all alphabet except q and e
 * Return: 0 if there is no error
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
			c++;
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
