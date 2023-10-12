#include "main.h"

int print_last_digit(int a)
{
	int ulti;

	if (a < 0)
	{
		ulti = -1 * (a % 10);
	}

	else
	{
		ulti = a % 10;
	}

	_putchar((ulti % 10) + '0');

	return (ulti % 10);
}
