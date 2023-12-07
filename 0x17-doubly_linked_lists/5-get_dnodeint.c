#include"lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: my link list
 * @index: the index of the node, starting from 0
 * Return:  nth node ot NULL of doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nodes = 0, i;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		nodes++;
		temp = temp->next;
	}
	if (index > (nodes - 1))
		return (NULL);

	temp = head;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
