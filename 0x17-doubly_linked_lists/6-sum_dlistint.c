#include "lists.h"
/**
 * sum_dlistint -  function that returns the sum of all the data of link list
 * @head: my link list
 * Return: sum of all the data or if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
