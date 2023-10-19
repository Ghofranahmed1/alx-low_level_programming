#include "lists.h"
#include <stdio.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer
 * @str: a string that in head->string
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t new_node;
	list_t address;

	address = malloc(sizeof(list_t));
	head = *head;
	*head = new_node;
	new_node->next = head;
	if (*head == NULL)
		return (NULL);
	new_node->str = strdup(str);
	return (*head);
}	
