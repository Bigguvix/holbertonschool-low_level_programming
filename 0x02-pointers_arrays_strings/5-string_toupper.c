#include "main.h"

/**
 * string_toupper - Mainf Function.
 *
 * @a: String.
 *
 * Return: in.
 */
char *string_toupper(char *a)
{
	char *in = a;

	while (*a)
	{
		if (*a >= 'a' && *a <= 'z')

			*a -= 32;
		++a;
	}

	return (in);
}
