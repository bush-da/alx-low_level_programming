#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: separator of numbers
 * @n: total numbers to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ag;

	va_start(ag, n);
	i = 1;
	while (i <= n)
	{
		printf("%d", va_arg(ag, int));
		if (separator && i < n)
			printf("%s", separator);
		i++;
	}
	va_end(ag);
	printf("\n");
}
