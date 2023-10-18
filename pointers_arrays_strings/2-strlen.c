#include "main.h"

/**
 * _strlen - Main Function.
 *
 * @s: Pointer to integer.
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	int lar = 0;

	while (s[lar] != '\0')
		++lar;
	return (lar);
}
