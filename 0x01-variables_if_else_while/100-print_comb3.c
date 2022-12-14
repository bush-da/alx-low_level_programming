#include <stdio.h>

/**
 * main - print every combination of 2 base10
 * without same combination
 * Return: 0 if there is no error
 */

int main(void)
{
	int n1;
	int n2;

	n1 = 48;
	n2 = 49;

	while (n1 <= 57)
	{
		while (n2 <= 57)
		{
			putchar(n1);
			putchar(n2);
			if (n1 == 56 && n2 == 57)
				break;
			putchar(',');
			putchar(' ');
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}
	putchar('\n');

	return (0);
}
