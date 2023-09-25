#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: a pointer
 * @b: input character
 * @n: unsigned intger input
 *  * Return: returns pointer to location filled
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

