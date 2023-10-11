#include <stdio.h>

/**
 * main - Main Function.
 *
 * Return: Nothing.
 */
int main(void)
{
	int numb;
	char alpha;

	for (numb = '0'; numb <= '9'; ++numb)
		putchar(numb);
	for (alpha = 'a'; alpha <= 'f'; ++alpha)
		putchar(alpha);
	putchar('\n');

	return (0);
}
