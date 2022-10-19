#include <stdio.h>

/**
 * main - prits multiple of 3 or 5
 * Return: 0 if there is no error
 */

int main(void)
{
	int i, sum, num;

	num = 1024;
	sum = 0;

	for (i = 1; i < num; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
			sum += i;
	}
	printf("%d",sum);

	return (0);
}
