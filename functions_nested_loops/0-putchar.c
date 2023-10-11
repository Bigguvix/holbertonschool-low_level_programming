#include <stdio.h>
#include "main.h"

/**
 * main - Main Function.
 *
 * Return: Nothing.
 */
int main(void)
{
	char a[8] = "_putchar";
	int b;

	for (b = 0; b < 8; ++b)
		_putchar(a[b]);
	_putchar('\n');

	return (0);
}
