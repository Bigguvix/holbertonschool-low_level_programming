#include "main.h"

/**
 * print_numbers - Program to print numbers from 0 to 9
 *
 *
 * Return: Nothing.
 */
void print_numbers(void)
{
	char a;

	for (a = 0; a <= 9; ++a)
		putchar((a % 10) + '0');
	putchar('\n');
}
