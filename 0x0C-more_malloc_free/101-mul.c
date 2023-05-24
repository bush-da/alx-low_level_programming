#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * checker - checks for if the argument passed is number of not
 * @num: argument to be checked
 * Return: 0 if number 1 if not number
 */

int checker(char *num)
{
	int i;

	i = 0;
	while (num[i] != '\0')
	{
		if (num[i] >= 48 && num[i] <= 57)
			i++;
		else
			return (1);
	}
	return (0);
}

/**
 * main multiplies two positive numbers
 * @argc: number of argument
 * @argv: array of pointers
 * Return: 0 if there is no error
 */

int main(int argc, char **argv)
{
	int num1, num2, tot;

	if (argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = checker(argv[1]);
	num2 = checker(argv[2]);
	if (num1 == 1 || num2 == 1)
	{
		printf("Error\n");
		exit(98);
	}
	tot = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", tot);
	return (0);
}
