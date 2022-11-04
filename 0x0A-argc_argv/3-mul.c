#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of argument
 * @argv: arguments it receives
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x, y, total;

	if (argc <= 1)
		printf("Error");
	else
	{	
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		total = x * y;
		printf("%d", total);
	}
	return (0);
}
