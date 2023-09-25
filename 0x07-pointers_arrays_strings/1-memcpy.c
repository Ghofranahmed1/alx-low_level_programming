#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: a input pointer
 * @src: a input pointer
 * @n : unsigned intger input
 * Return: return pointer to copy location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

