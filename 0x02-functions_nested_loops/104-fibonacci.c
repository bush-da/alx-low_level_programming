#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 * Return: 0 if there is no error
 */

int main(void)
{
	int fib1, fib2, fib3, count, num;

	fib1 = 1;
	fib2 = 2;
	num = 98;
	count = 2;
	printf("%d, %d, ", fib1, fib2);
	while (count <= num)
	{
		fib3 = fib1 + fib2;
		count++;
		printf("%d, ", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}

	return (0);
}

