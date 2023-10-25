#include "main.h"

/**
 * _strcat - Main Function.
 *
 * @dest: String.
 * @src: String.
 *
 * Return: Nothing.
 */
char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest)
		++dest;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (a);
}
