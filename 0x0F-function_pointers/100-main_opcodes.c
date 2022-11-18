#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints op codes of main function
 * @argc: argument count
 * @argv: array of pointer to arguemnt
 * Return: 0 if there is no error
 */

int main(int argc, char **argv)
{
	int i, bytes;
	char *op = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", op[i] & 0xFF);
		if (i != bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
