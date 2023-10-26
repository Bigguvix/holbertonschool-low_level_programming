#include "main.h"

/**
 * swap_int - Main Function.
 *
 * @a: Pointer to integer.
 * @b: Pointer to integer.
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int put = *a;

	*a = *b;
	*b = put;
}
