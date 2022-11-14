#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * Return: 0 if there is no error
 */

int main(void)
{
	char *str = __FILE__;

	printf("%s\n", str);

	return (0);
}
