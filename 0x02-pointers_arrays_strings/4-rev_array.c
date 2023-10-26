#include "main.h"

/**
 * reverse_array - Main Function.
 *
 * @a: Integer.
 * @n: Integer.
 *
 * Retur: Nothing.
 */
void reverse_array(int *a, int n)
{
	int d;
	int b;
	int c;

	for (d = 0; d < n; ++d)
	{
		for (b = d; b > 0; --b)
		{
			c = *(a + b);
		       *(a + b) = *(a + (b - 1));
			*(a + (b - 1)) = c;
		}
	}
}
