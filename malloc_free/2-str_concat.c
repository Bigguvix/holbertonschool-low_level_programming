#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Main Function.
 *
 * @s1: Pointer to char s1.
 * @s2: Pointer to char s2.
 *
 * Return: str.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int a, b, c, cap;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	for (a = 0; s1[a] != '\0'; ++a)
		;

	for (b = 0; s2[b] != '\0'; ++b)
		;

	str = malloc(sizeof(char) * (a + b + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (c = 0; c < a; ++c)
		str[c] = s1[c];


	cap = b;

	for (b = 0; b <= cap; ++c, ++b)
		str[c] = s1[b];


	return (str);
}
