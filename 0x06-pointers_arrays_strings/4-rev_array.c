#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: accept pointer to array integer
 * @n: accept size of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, rev, temp;

	rev = n - 1;
	for (i = 0; i < rev; i++)
	{
		temp = a[i];
		a[i] = a[rev];
		a[rev] = temp;
		rev--;
	}
}
