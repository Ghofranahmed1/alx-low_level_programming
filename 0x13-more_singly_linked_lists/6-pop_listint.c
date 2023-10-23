#include"lists.h"
/**
 * pop_listint - function that deletes the head node of linklist
 * @head: pointer to the link list
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	if ((*head)->next == NULL)
	{
		*head = NULL;
	}
	else
	{
	*head = (*head)->next;
	}
	n = temp->n;
	free(temp);
	return (n);
}
