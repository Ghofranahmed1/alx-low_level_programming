#include "lists.h"
/**
 * add_nodeint -  function that adds a new node at the beginning of link list
 * @head: pointer to the link list
 * @n: the intger inside link list
 * Return:  the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		temp = *head;
		*head = new;
		new->next = temp;
	}
	return (new);
}


