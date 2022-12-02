#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: characters of binary number
 * Return: unsigned int of binary number entered
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, tot, pos;
	int single;
	const char *flag;

	if (!b)
		return (0);

	flag = b;
	pos = tot = 0;

	while (*b != '\0')
		b++;
	b--;
	while (b >= flag)
	{
		single = *b - '0';
		if (single != 0 && single != 1)
			return (0);
		sum = single << pos;
		tot += sum;
		pos++;
		b--;
	}
	return (tot);
}
