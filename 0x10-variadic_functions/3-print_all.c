#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: format of passed argument
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ag;
	unsigned int i, j, c;
	char *str;
	const char arg[] = "cifs";

	i = 0;
	c = 0;
	va_start(ag, format);
	while (format && format[i])
	{
		j = 0;
		while (arg[j])
		{
			if (format[i] == arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ag, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(ag, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(ag, double)), c = 1;
			break;
		case 's':
			str = va_arg(ag, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}i++;
	}
	printf("\n"), va_end(ag);
}
