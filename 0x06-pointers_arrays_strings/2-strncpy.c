#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
char *tmpt = dest;

while (n-- > 0 && *src)
{
*dest++ = *src++;
}
while (n-- > 0)
{
*dest++ = '\0';
}

return (tmpt);
}
