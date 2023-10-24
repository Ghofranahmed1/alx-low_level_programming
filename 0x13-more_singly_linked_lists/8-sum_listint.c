#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data in linklist
 * @head: pointer to the link list
 * Return:  returns the sum of all the data in link list
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
