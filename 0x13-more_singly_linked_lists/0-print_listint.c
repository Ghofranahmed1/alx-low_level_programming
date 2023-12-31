#include"lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to the listlink
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	const listint_t *temp = h;

	if (h == NULL)
		return (0);
while (temp != NULL)
{
printf("%d\n", temp->n);
nodes++;
temp = temp->next;
}
return (nodes);
}
