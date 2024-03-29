#include "main.h"

/**
 * clear_bit - Main FUnction
 *
 * @n: Pointer to integer
 * @index: Index
 *
 * Return: -1 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
