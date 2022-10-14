#include <stdio.h>

/**
 * main - prints base 10 digits
 * Return: 0 if there is no erro
 */

int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		printf("%d",n);
		n++;
	}
	putchar('\n');
	return (0);
}
