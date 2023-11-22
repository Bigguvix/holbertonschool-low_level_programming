#include "lists.h"

/**
 * list_len - Main Function.
 *
 * @h: The list_t list
 *
 * Return: The number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		++elem;
		h = h->next;
	}

	return (elem);
}
