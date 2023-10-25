#include "main.h"

/**
 * _strncat - Main Function.
 *
 * @dest: String.
 * @src: String.
 * @n: Integer.
 *
 * Return: Nothing.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lar = 0;
	int a = 0;
	char *b = dest;
	char *i = src;

	while (*dest)
		dest++;


	while (*src)
	{
		lar++;
		src++;
	}

	if (n > lar)
		n = lar;

	src = i;

	for (; a < n; ++a)
		*dest++ = *src++;

	*dest = '\n';

	return (b);
}
