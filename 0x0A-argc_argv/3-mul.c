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
	int i, tot;

	tot = i = 1;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	while (i < argc)
	{
		tot *= atoi(argv[i]);
		i++;
	}
	printf("%d\n", tot);

	return (0);
}
