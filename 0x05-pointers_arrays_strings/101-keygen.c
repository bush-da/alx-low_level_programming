#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random password
 * Return: 0 if there is no error
 */

int main(void)
{
	int counter, rnum, idx, key;
	char *ch = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char passwrd[50];

	srand(time(NULL));
	while (key != 2772)
	{
		counter = idx = key = 0;
		while (key < 2772)
		{
			rnum = rand() % 63;
			passwrd[counter] = ch[rnum];
			key += ch[rnum];
			counter++;
		}
		while (ch[idx])
		{
			if (ch[idx] == (2772-key))
			{
				rnum = rand() % 63;
				passwrd[counter] = ch[rnum];
				key += ch[rnum];
				counter++;
				break;
			}
			idx++;
		}
	}
	passwrd[counter] = '\0';
	printf("%s",passwrd);
	return (0);
}
