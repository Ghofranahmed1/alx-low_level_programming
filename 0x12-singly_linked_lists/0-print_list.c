#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to the first node
 * Return:  the number of nodes
 */
size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("%s",h->str);
		}
		printf("%u", h->len);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
