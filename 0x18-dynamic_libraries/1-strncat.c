#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
char *tmpt = dest;

while (*dest)
{
dest++;
}
while (n-- > 0 && *src)
{
*dest++ = *src++;
}
return (tmpt);
}
