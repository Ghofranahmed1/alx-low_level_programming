#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: a pointer input
 * @accept: a pointer input
 * Return: return a character pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int flag = 0;
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				flag = 1;
				break;
			}
			accept++;
		}
		if (flag == 1)
		{
			break;
		}
		s++;
		accept = start;
	}
	return (s);
}
