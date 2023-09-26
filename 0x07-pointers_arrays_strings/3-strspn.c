#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: a pointer input
 * @accept: a pointer input
 * Return: return unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
int count = 0, flag;
char *start = accept;

while (*s)
{
	flag = 0;
	while (*accept)
	{
		if (*s == *accept)
		{
			count++;
			flag = 1;
			break;
		}
		accept++;
	}
	s++;
	accept = start;
	if (flag == 0)
	{
		break;
	}
}
return (count);
}
