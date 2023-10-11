#include <stdio.h>

/**
 * main - Main Function.
 *
 * Return: Nothing.
 */
int main(void)
{
	int numb;

	for (numb = '0'; numb <= '9'; ++numb)
		putchar(numb);
	putchar('\n');

	return (0);
}
