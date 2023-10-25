#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Main Function
 *
 * @dest: Character
 * @src: Character
 *
 * Return: Nothing.
 */
char *_strcpy(char *dest, char *src)
{
	char *hel = dest;

	while (*src)
		*dest++ = *src++;
	return (hel);
}
