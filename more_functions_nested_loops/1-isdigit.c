#include "main.h"

/**
 * _isdigit - Program to check for a digit
 *
 * @c: digit to be checked.
 *
 * Return: 1 if its a digit 0 if otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
