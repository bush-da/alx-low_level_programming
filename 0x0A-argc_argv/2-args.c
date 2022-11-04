#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of argument
 * @argv: arguments it receives
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x;

	x = 0;
	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
