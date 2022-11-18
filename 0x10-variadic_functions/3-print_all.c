#include "variadic_functions.h"

/**
 * checker - checks for valid inputs and put , after
 * printing the content
 * @c: character to be checked
 * @flag: flag to mark it is the end
 * Return: void
 */

void checker(char c, int flag)
{
	char check[] = "cifs";
	int j;

	j = 0;
	while (check[j])
	{
		if (c == check[j] && flag)
		{
			printf(", ");
			break;
		}
		j++;
	}
}

/**
 * print_all - prints anything
 * @format: format of passed argument
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ag;
	unsigned int i, flag;
	char *str;

	i = flag = 0;
	va_start(ag, format);
	while (format && format[i])
	{
		checker(format[i], flag);
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ag, int)), flag = 1;
		       	break;
		case 'i':
			printf("%d", va_arg(ag, int)), flag = 1;
		       	break;
		case 'f':
			printf("%f", va_arg(ag, double)), flag = 1;
		       	break;
		case 's':
			str = va_arg(ag, char *), flag = 1;
			if (!str){
				printf("(nil)");
				break; }
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(ag);
}
