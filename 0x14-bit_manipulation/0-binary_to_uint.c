#include "main.h"

/**
 * power - powers in 2 the power of input
 * @x: input number
 * Return: the result of power
 */

unsigned int power(unsigned int x)
{
	unsigned int tot;

	tot = 1;
	if (x == 0)
		return (1);
	while (x >= 1)
	{
		tot *= 2;
		x--;
	}
	return (tot);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: characters of binary number
 * Return: unsigned int of binary number entered
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	unsigned int tot;
	unsigned int pos;
	int single;
	const char *flag;

	flag = b;
	pos = 0;
	tot = 0;
	while (*b != '\0')
		b++;
	b--;
	while (b >= flag)
	{
		single = *b - '0';
		if (single != 0 && single != 1)
			return (0);
		sum = single * power(pos);
		tot += sum;
		pos++;
		b--;
	}
	return (tot);
}
