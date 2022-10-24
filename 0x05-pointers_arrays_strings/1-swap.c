#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to integer parameter
 * @b: pointer to integer parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
