#include "lists.h"
/**
 *  print_dlistint -  function that prints all the elements of linked list
 *  @h: a pointer to my list
 *  Return:  the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t nodes = 0;

	if (h == NULL)
	{
		dprintf(2, "Error: empty list\n");
			return (EXIT_FAILURE);
	}
	else
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		nodes++;
		temp = temp->next;
	}
	}
	return (nodes);
}
