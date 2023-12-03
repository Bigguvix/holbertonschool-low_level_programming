#include "main.h"

/**
 * binary_to_uint - MAIN Function
 *
 * @b: Pointer.
 *
 * Return: b or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int mult = 1;
	int len;

	 (b == '\n')
		return (0);

	for (len = 0; b[len];)
		++len;

	for (len -= 1; len >= 0; --len)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (num);
}
