#include "main.h"

/**
 * _islower - prints 1 if the character is lowercase
 * print 0 if the character is in uppercase
 * @c: is parameter takes single alphabet char
 * Return: 1 if lower 0 if its upper
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
