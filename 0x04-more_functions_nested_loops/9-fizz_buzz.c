#include <stdio.h>

/**
 * main - prints fizz fo multiples of 3
 * prints buzz for multiples of 5
 * fizzbuzz for multiples of 3 and 5
 * Return: 0 if there is no error
 */

int main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
			continue;
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
