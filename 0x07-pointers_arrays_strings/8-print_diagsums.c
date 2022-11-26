#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: address of two diagonals of a square matrix
 * @size: size of diagonal
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, k, l;
	long int totl, totk;

	i = j = k = 0;
	l = size - 1;
	totl = totk = 0;
	while (i < (size * size))
	{
		totl += a[i + l];
		totk += a[i + k];
		i += size;
		l -= (size % 2);
		k += (size % 2);
	}
	printf("%ld, %ld\n", totk, totl);
}
