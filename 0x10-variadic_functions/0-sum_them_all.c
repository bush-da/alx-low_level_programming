#include <stdarg.h>

/**
 * sum_them_all - function that sum of all its parameters
 * @n: number of args
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, tot;
	va_list ap;

	if (n == 0)
		return (0);
	tot = 0;
	va_start(ap, n);
	i = 1;
	while (i <= n)
	{
		tot += va_arg(ap, unsigned int);
		i++;
	}
	return (tot);
}

