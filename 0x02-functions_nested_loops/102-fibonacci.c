#include <stdio.h>

/**
 * main - prints the first 50 fibonacci number
 * Return: 0 if there is no error
 */
int main()
{
	
	int fib1, fib2, fib3, num, count;

	fib1 = 0;
	fib2 = 1;

	count = 2;

	num = 50;
	printf("%d %d, ", fib1, fib2);

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
