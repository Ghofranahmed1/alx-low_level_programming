#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer to the linl list
 * @idx: the index of the list where the new node should be added
 * @n: the value in the new node
 * Return: he address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new;
	unsigned int len_node = 0, i = 0;

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (temp != NULL)
	{
		len_node++;
		temp = temp->next;
	}
	temp = *head;
	if (idx > len_node)
	{
		free(new);
		return (NULL);
	}
	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
