#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: num if literatin
 * @c: printed char
 * Return: Apointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
}
if (str == NULL)
{
	return (NULL);
}
	for (i = 0; i < size; i++)
	{
	str[i] = c;
	}
return (str);
}
