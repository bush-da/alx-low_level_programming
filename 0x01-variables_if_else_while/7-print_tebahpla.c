#include <stdio.h>

/**
 * main - print alphabet in reverse order
 * Return: 0 if there is no error
 */

int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
