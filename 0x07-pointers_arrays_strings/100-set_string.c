#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: string to be set a value
 * @to: string value to set to s
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
