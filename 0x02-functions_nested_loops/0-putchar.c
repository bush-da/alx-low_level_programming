#include "main.h"
/**
 * main - prints _putchar
 * Return: 0 if there is no error
 */

int main()
{
	int i;
	char s[] = "_putchar";

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
