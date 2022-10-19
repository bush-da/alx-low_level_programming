#include <stdio.h>

/**
 * main - prints the first 50 fibonacci number
 * Return: 0 if there is no error
 */
int main(void)
{
	
	int fib1, fib2, fib3, num, count;

	fib1 = 1;
	fib2 = 2;

	count = 2;

	num = 50;
	printf("%d, %d, ", fib1, fib2);

	while (count <= num)
	{
		fib3 = fib1 + fib2;
		printf("%d, ", fib3);
		fib1 = fib2;
		fib2 = fib3;
		count++;
	}


	return (0);
}
