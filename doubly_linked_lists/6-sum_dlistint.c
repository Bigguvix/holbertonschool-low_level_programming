#include "lists.h"

/**
 * sum_dlistint - Main Function
 * @head: Head.
 *
 * Return: Sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int a = 0;

	while (head)
	{
		a += head->n;
		head = head->next;
	}

	return (a);
}
