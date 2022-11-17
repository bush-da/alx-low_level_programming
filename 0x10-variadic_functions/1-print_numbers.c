#include <stdarg.h>
#include <stdio.h>

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
	if (separator != NULL)
	{
		while (i <= n)
		{
			printf("%d", va_arg(ag, int));
			if (i != n)
			{
				printf("%c ", *separator);
			}
			i++;
		}
		printf("%d");
	}
}
