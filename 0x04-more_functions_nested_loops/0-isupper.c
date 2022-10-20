#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: accepts argument
 * Return: 1 is c is uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
