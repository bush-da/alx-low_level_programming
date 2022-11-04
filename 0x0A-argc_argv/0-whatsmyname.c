#include <stdio.h>

/**
 * main - prints it's name
 * @argc: number of argument
 * @argv: arguments passed to the function
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
