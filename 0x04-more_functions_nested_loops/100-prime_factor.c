#include <stdio.h>

/**
 * main - prints prime factors of 612852475143
 * Return: 0 if there is no error
 */

int main(void)
{
	long unsigned int num;
	long unsigned int count;

	num = 612852475143;
	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			printf("%lu", count);
			num = num / count;
			if (num > 1)
				printf(" ");
		}
	}
	printf("\n");

	return (0);
}
