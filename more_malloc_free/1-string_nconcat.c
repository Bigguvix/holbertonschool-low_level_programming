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
	char *cat;

	unsigned int len = n, a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a]; ++a)
		len++;

	cat = malloc(sizeof(char) * (len + 1));

	if (cat == NULL)
		return (NULL);

	len = 0;

	for (a = 0; s1[a]; ++a)
		cat[++len] = s2[a];

	cat[len] = '\0';

	return (cat);
}
