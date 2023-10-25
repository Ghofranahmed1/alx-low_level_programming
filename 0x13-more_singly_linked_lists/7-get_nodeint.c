#include"lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of linklist
 * @head: poiner to linl list
 * @index:  index of the node, starting at 0
 * Return:  returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0, len = 0;

	if(head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	temp = head;
/* case if there only one node */
	if (index == 0 && head->next == NULL)
	{
		return (head);
	}
	/* case the node dosen't exist */
	else if (index >= len)
		return (NULL);

	else
	{
	while (i < index)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
	}
}

