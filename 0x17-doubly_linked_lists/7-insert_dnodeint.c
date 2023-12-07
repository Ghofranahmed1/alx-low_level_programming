#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: my link list
 * @idx: index of the list where the new node should added Index starts at 0
 * @n: my data
 * Return: address of the new node, or NULL if it failed or don't add new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;
	unsigned int len = 0, i;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL || idx > (len - 1))
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	temp = *h;
	if (idx == 0)
	{
		*h = new;
		return (new);
	}
	else if (idx == (len - 1))
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
		return (new);
	}
	else
	{
	for (i = 0; i < idx; i++)
		temp = temp->next;
	new->next = temp;
	new->prev = temp->prev;
	temp->prev->next = new;
	temp->prev = new;
	return (new);
	}
}
