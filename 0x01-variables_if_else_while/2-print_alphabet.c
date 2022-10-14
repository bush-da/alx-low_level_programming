#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * Return: 0 if there is no error
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
