#include <stdio.h>

/**
 * main - prints the sum of even value fibonacci
 * Return: 0 if there is no error
 */

int main(void)
{
	long fib1, fib2, fib3, sum;

	fib1 = 1;
	fib2 = 2;
	sum = 2;
	fib3 = 0;

	while (fib3 < 4000000)
	{
		if (fib3 % 2 == 0)
		{
			sum += fib3;
		}
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("%ld\n", sum);

	return (0);
}
