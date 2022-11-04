#include <stdio.h>

/**
 * main - prints the number of argument
 * @argc: number of argument
 * @argv: argument passed to function
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc);
	return (0);
}
