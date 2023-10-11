#include <stdio.h>

/**
 * main - Main Function.
 *
 * Return: Nothing.
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; --alpha)
		putchar(alpha);
	putchar('\n');

	return (0);
}
