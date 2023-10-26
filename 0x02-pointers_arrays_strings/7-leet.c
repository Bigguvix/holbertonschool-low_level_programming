#include "main.h"

/**
 * leet - Main Function.
 *
 * @a: string.
 *
 * Return: a.
 */
char *leet(char *a)
{
	int b = 0;
	int c;

	char let[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};


	while (a[b])
	{
		for (c = 0; c < 10; ++c)
			if (a[b] == str[c])
				a[b] = let[c];
		++b;
	}

	return (a);
}
