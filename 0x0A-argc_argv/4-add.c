#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive number
 * @argc: number of argument
 * @argv: arguments it recevies
 * Return: 0
 */

int main(int argc, char **argv)
{
	int tot, i, x, y, a;

	tot = 0;
	i = 1;
	a = argc;
	if (argc == 1)
	{
		printf("%d\n", tot);
		return (0);
	}
	for (x = 1; x < a; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!(isdigit(argv[x][y])))
			{
				printf("Error\n");
				return (1);
			}
		}
		tot += atoi(argv[x]);
	}
	printf("%d\n", tot);
	return (0);
}
