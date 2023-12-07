#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: my linl list
 * @index: s the index of the node that should be deleted. Index starts at 0
 * Return: Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len = 0, i;
	dlistint_t *temp = *head;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	if (index > (len - 1) || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		temp->next->prev = NULL;
		*head = temp->next;
		temp->next = NULL;
		free(temp);
			return (1);
	}
	else if (index == (len - 1))
	{
		while (temp->next == NULL)
			temp = temp->next;
		temp->prev->next = NULL;
		temp->prev = NULL;
		free(temp);
		return (1);
	}
	else
	{
	for (i = 0; i  < index; i++)
		temp = temp->next;
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	temp->next = NULL;
	temp->prev = NULL;
	free(temp);
	return (1);
	}
}
