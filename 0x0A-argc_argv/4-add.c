#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive number
 * @argc: number of argument
 * @argv: arguments passed
 * Return: 0
 */

int main(int argc, char **argv)
{
	int tot, i;

	tot = 0;
	i = 1;
	if (argc == 1)
	{
		printf("%d\n", tot);
		return (0);
	}
	while (i < argc)
	{
		if (*argv[i] >= 48 && *argv[i] <= 58)
		{
			tot += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", tot);
	return (0);
}
