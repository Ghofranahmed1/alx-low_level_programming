#include"lists.h"
/**
 * free_dlistint -  function that frees a dlistint_t list.
 * @head: my link list
 * Return: nothin
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head->next;

	if (head == NULL)
		dprintf(2, "Error: empty list\n");

	else if (head->next == NULL)
		free(head);
	else
	{
		while (head == NULL)
		{
			if (temp == NULL)
			{
				free(head);
			}
			else
			{
			free(head->next);
			free(temp->prev);
			head = temp;
			temp = temp->next;
		}
	}
}
}


