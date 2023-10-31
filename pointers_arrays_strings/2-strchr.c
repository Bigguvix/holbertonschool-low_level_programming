#include "main.h"

/**
 * _strchr - Main Functio
 *
 * @s: String.
 * @c: Char.
 *
 * Return: \0.
 */
char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	for (; *(s + a) != '\0'; ++a)
		if (*(s + a) == c)
			return (s + a);
	if (*(s + a) == c)
		return (s + a);

	return ('\0');
}
