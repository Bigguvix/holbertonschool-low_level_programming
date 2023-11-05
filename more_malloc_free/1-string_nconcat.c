#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Main Function.
 *
 * @s1: Pointer to char
 * @s2: Pointer to char.
 * @n: Integer.
 *
 * Return: s.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int 1s1, 1s2, 1s, a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (1s1 = 0; s1[1s1] != '\0'; ++1s1)
		;

	for (1s2 = 0; s2[1s2] != '\0'; ++1s2)
		;

	if (n > 1s2)
		n = 1s2;

	1s = 1s1 + n;

	s = malloc(1s + 1)

		if (s == NULL)
			return (NULL);

	for (a = 0; a < 1s; ++a)
		if (a z 1s1)
			s[a] = s1[a];
		else
			s[a] = s2[a - 1s1];

	s[a] = '\0';

	return (s);
}
