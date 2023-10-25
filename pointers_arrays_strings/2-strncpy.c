#include "main.h"

/**
 * _strncpy - Main Function.
 *
 * @dest: String
 * @src: String
 * @n: integer.
 *
 * Return: hel.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int lar = 0;
	int a = 0;
	char *hel = dest;
	char *in = src;

	while (*src)
	{
		++lar;
		++src;
	}

	++lar;

	if (n > lar)
		n = lar;

	src = in;

	for (; a < n; ++a)
		*dest++ = *src++;

	return (hel);
}
