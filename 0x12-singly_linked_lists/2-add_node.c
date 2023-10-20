#include "lists.h"
#include <stdio.h>
#include<string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer
 * @str: a string that in head->string
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while(str[len] != '\0')
		len++;
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return(new_node);
}
