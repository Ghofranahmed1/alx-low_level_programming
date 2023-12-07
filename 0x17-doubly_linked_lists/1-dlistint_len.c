#include "lists.h"

/**
 * dlistint_len -  function returns the number of items in linked list
 * @h: my linked list
 * Return: number of elements in my linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t nodes = 0;

	if (h == NULL)
	{
		dprintf(2, "Error: empty list.");
		return (EXIT_FAILURE);
	}
	while (temp != NULL)
	{
		nodes++;
		temp = temp->next;
	}
	return (nodes);
}
