#include <stdio.h>

/**
 * main - prints the sum of even value fibonacci
 * Return: 0 if there is no error
 */

int main(void)
{
	int fib1, fib2, fib3, sum;

	fib1 = 1;
	fib2 = 2;
	sum = fib2;
	fib3 = 0;

	while (fib3 < 4000000)
	{
		fib3 = fib1 + fib3;
		if (fib3 % 2 == 0)
		{
			sum += fib3;
		}
	}
	printf("%d\n", sum);

	return (0);
}
