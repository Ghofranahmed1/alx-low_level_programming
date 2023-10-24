#include "lists.h"
/**
 * reverse_listint - function that reverses a link list
 * @head: pointer to the linlk list
 * Return: a pointer to the first node of the reversed list
 */
 listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *pre = NULL;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		current->next = pre;
		pre = current;
		current = next;
	}
	*head = pre;
	return (*head);
}

