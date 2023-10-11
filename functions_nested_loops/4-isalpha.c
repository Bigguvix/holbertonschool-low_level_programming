#include "main.h"

/**
 * _isalpha - Main Functin.
 *
 * @c: Entry point.
 *
 * Return: u.
 */
int _isalpha(int c)
{
	char a, b;
	int u = 0;

	for (a = 'a'; a <= 'b'; ++a)
	{
		for (b = 'A'; b <= 'Z'; ++b)
		{
			if (c == a || c == b)
				u = 1;
		}
	}

	return (u);
}
