#include <stdio.h>

/**
 * main - prints prime factors of 612852475143
 * Return: 0 if there is no error
 */

int main(void)
{
	unsigned long int num, count, max;

	max = 0;
	num = 612852475143;
	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			if (max < count)
				max = count;
			num = num / count;
		}
	}
	printf("%d\n", max);

	return (0);
}
