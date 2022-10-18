#include <stdio.h>

/**
 * main - prints _putchar
 * Return: 0 if there is no error
 */

int main(void)
{
	int i;
	char s[] = "_putchar";

	i = 0;
	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}

	return (0);
}
