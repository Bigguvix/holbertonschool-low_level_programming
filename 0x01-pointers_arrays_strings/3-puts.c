#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _puts - Main Function.
 *
 * @str: Pointer to character.
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);


	putchar('\n');
}
