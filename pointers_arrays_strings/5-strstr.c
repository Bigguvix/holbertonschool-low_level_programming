#include "main.h"

/**
 * _strstr - Main Function.
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: 0.
 */
char *_strstr(char *haystack, char *needle)
{
	char *b;
	char *p;

	while (*haystack != '\0')
	{
		b = haystack;
		p = needle;

		while (*haystack != '\0' && *p != '\0' && *haystack == *p)
		{
			++haystack;
			++p;
		}
		if (!*p)
			return (b);
		haystack = b + 1;
	}

	return (0);
}
