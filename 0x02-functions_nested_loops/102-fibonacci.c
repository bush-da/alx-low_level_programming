#include <stdio.h>

/**
 * main - prints the first 50 fibonacci number
 * Return: 0 if there is no error
 */
int main(void)
{
	long fib1, fib2, fib3, num, count;

	fib1 = 1;
	fib2 = 2;

	num = 50;
	printf("%ld, %ld, ", fib1, fib2);

	for (count = 2; count < num; count++)
	{
		fib3 = fib1 + fib2;
		printf(", ");
		printf("%ld", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}


	return (0);
}
