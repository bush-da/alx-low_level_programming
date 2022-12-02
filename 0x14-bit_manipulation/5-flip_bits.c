#include "main.h"

/**
 * flip_bits - the number of bits you would need to filp
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count;
	unsigned long int current;
	unsigned long int exclusive;

	exclusive = n ^ m;
	i = 63;
	count = 0;
	while (i >= 0)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
		i--;
	}

	return (count);
}
