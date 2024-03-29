#include "lists.h"

/**
 * free_dlistint - Main Funciton
 * @head: Head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
