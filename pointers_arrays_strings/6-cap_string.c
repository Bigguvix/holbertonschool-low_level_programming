#include "main.h"

/**
 * cap_string - Main Function.
 *
 * @b: Pointer to b.
 *
 * Return: b.
 */
char *cap_string(char *b)
{
	int a = 0;

	while (b[a])
	{
		if (a == 0 && (b[a] >= 'a' && b[a] <= 'z'))
			b[a] -= 32;

		if (operators(b[a]) && (b[a] >= 'a' && b[a] <= 'z'))
			b[a] -= 32;

		++a;
	}

	return (b);
}


/**
 * operators - Function That checks for operators
 *
 * @c: Input character.
 *
 * Return: 1 for separetors, 0 otherwise.
 */
int operators(char c)
{
	int a = 0;

	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}'};

	for (; a < 13; ++a)
	{
		if (c == sep[a])
			return (1);
	}

	return (0);
}
