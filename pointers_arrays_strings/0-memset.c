#include "main.h"

/**
 * _memset - Main Function
 *
 * @s: Memory.
 * @b: byte.
 * @n: more bytes.
 *
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; ++a)
		*(s + a) = b;

	return (s);
}
