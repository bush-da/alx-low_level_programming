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
	int x, y;

	if (argc <= 1)
		printf("Error");
	else
	{	
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d", x * y);
	}
	return (0);
}
