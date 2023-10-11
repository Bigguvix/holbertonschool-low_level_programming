#include <stdio.h>

/**
 * main - Main function.
 *
 *
 *
 * Return: Nothing.
 */
int main(void)
{
	char c, e, q;

	e = 'e';
	q = 'q';


	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != q && c != e)
			putchar(c);
	}
	putchar('\n');

	return (0);
}
