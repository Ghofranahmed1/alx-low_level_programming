#include"lists.h"
/**
 * listint_len -  function that returns the number of elements in a linked list
 * @h: the linked list
 * Return:  returns the number of elements in a linked
 */
size_t listint_len(const listint_t *h)
{
	size_t element = 0;
	const listint_t *temp = h;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		element++;
		temp = temp->next;
	}
	return (element);
}

