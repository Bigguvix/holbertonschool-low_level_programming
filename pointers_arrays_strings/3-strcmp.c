#include "main.h"

/**
 * _strcmp - Main Function.
 *
 * @s1: String.
 * @s2: String.
 *
 * Return: b.
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (b == 0)
	{
		if ((*(s1 + a) == '\0') && (*(s2 + a) == '\0'))
			break;
		b = *(s1 + a) - *(s2 + a);
		++a;
	}

	return (b);
}
