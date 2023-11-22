#include "lists.h"
#include <stdio.h>

/**
 * print_list - Main function.
 *
 * @h: The list_t list.
 *
 * Return: The nodes amount.
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		++node;
		h = h->next;
	}

	return (node);
}
