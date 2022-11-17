#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of argument
 * @argv: array of pointer to argument passed
 * Return: 0 if there no error
 */

int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	i = 0;
	while (i < nbytes)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
