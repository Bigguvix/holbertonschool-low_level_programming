#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Main Function.
 *
 * @str: String.
 *
 * Return: dup.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; ++a)
		;

	dup = (char *)malloc(sizeof(char) * (a + 1));

	if (dup == NULL)
		return (NULL);

	for (b = 0; b <= a; ++b)
		dup[b] = str[b];

	return (dup);
}
