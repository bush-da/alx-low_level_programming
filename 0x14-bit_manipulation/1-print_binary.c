#include "main.h"



void print_binary(unsigned long int n)
{
	unsigned int temp;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	if (n == 1)
	{
		putchar('1');
		return;
	}
	temp = n;
	while (temp)
	{
		if (temp & n)
			putchar('1');
		else
			putchar('0');
		temp = temp >> 1;
	}
}
