#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - make a copy of the string given as a parameter.
 * @str: a pointer to a string
 * Return: Apointer to new string or NULL if it str is NULL
 */

char *_strdup(char *str)
{
	int j = 0, len = 0;
	char *new_str, *start;

	 start = str;
	while (*str)
	{
		len++;
		str++;
	}
str = start;
new_str = malloc(sizeof(char) * (len + 1));
	start = new_str;
	if (new_str == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		for (j = 0; j < len; j++)
		{
			new_str[j] = *str;
			str++;
		}
		new_str[j] = '\0';
		return (new_str);
	}
	return (NULL);

}
