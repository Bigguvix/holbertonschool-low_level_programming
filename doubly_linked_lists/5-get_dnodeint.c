#include "lists.h"

/**
 * get_dnodeint_at_index - Main Funciton
 *
 * @head: Head.
 * @index: Node.
 *
 * Return: NULL or Head.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; --index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
