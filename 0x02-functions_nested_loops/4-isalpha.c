#include "main.h"

/**
 * _isalpha - checks for if input is alphabet or not
 * @c: takes argument
 * Return: 1 if argument is alphabet 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
