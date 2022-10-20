#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: accept the size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = size; i >= 1; i--)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			for (k = (size+1)-i; k > 0; k--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
