#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of argument
 * @argv: arguments it receives
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x, y, total;

	if (argc > 0)
	{
		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
		x = *argv[1] - 48;
		y = *argv[2] - 48;
		total = x * y;
		printf("%d\n", total);
	}
	return (0);
}
