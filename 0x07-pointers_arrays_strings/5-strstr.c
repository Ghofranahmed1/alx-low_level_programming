#include "main.h"
#include <stdio.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: an input pointer
 * @needle: an input pointer
 * Return: return a character pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *next;

	while (*haystack)
	{
		next = haystack;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		 haystack = next + 1;
	}
	return (NULL);
}
