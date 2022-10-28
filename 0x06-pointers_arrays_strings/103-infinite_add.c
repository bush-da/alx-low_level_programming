#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: accept the first number
 * @n2: accept the second number
 * @r: buffer than store the result
 * @size_r: buffer size
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, big, val1, val2, sum, rem;

	len1 = len2 = rem = 0;
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 >= len2)
		big = len1;
	else
		big = len2;
	if (size_r <= big + 1)
		return (0);
	r[big + 1] = '\0';
	len1--, len2--, size_r--;
	val1 = r[len1] - 48, val2 = r[len2] - 48;
	while (big >= 0)
	{
		sum = val1 + val2 + rem;
		if (sum >= 10)
			rem = sum / 10;
		else
			rem = 0;
		if (sum > 0)
			r[big] = (sum % 10) + 48;
		else
			r[big] = '0';
		if (len1 > 0)
			len1--, val1 = n1[len1] - 48;
		else
			val1 = 0;
		if (len2 > 0)
			len2--, val2 = n2[len2] - 48;
		else
			val2 = 0;
		big--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}

