#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Main Funcution
 *
 * @nmemb: Integer
 * @size: Integer
 *
 * Return: mem
 */
void _calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *a;
	unsigned int index;


	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	a = mem;

	for (index = 0; index < (size * nmemb); ++index)
		a[index] = '\0';

	return (mem);
}
