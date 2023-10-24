#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer to the link list
 * @index: index of the node that needed to delete it
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *dele_node;
	unsigned int i;

	if (*head == NULL)
		return  (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else if (index == 0 && (*head)->next == NULL)
	{
		*head = NULL;
		free(temp);
	}
	else
	{
		for (i = 0; i < (index - 1); i++)
		{
			if (temp == NULL)
			{
				return (-1);
			}
			temp = temp->next;
		}
		dele_node = temp->next;
		temp->next = dele_node->next;
		free(dele_node);
	}
	return (1);
}

