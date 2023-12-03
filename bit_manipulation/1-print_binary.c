#include "main.h"
#include <stdio.h>
/**
 * print_binary - Main Function
 *
 * @n: Integer Printed.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0')
}
