#include <stdio.h>

/**
 * main - print 3 combination of base10
 * numbers with no same combination
 * Return: 0 if there is no error
 */

int main(void)
{
	int n1;
	int n2;
	int n3;

	n1 = 48;
	n2 = 49;
	n3 = 50;
	while (n1 <= 57)
	{
		while (n2 <= 57)
		{
			while (n3 <= 57)
			{
				putchar(n1);
				putchar(n2);
				putchar(n3);
				if (n1 == 55 && n2 == 56 && n3 == 57)
					break;
				putchar(',');
				putchar(' ');
				n3++;
			}
			n2++;
			n3 = n2 + 1;
		}
		n1++;
		n2 = n1 + 1;
		n3 = n2 + 1;
	}
	putchar('\n');

	return (0);
}
