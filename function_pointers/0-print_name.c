#include "function_pointers.h"

/**
 * print_name - Main function.
 * @name: name to be printed.
 * @f: pointer to function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
