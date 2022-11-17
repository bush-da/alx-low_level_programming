#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separate a string
 * n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ag;
	char *arg;

	i = 1;
	va_start(ag, n);
	while (i <= n)
	{
		arg = va_arg(ag, char*);
		if (arg)
			printf("%s", arg);
		else
			printf("(nil)");
		if (separator && i < n)
			printf("%s", separator);
		i++;
	}
	va_end(ag);
	printf("\n");
}
