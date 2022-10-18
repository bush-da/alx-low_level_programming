#include "main.h"

/**
 * _abs - put a number into absolute value
 * @c: takes argument
 * Return: number if not negative
 */

int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	else
		return (c);
}

