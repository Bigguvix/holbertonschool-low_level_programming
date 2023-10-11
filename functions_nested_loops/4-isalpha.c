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
	char a, B;
	int u = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		for (B = 'A'; B <= 'Z'; B++)
		{
			if (c == a || c == B)
				u = 1;
		}
	}

	return (u);
}
