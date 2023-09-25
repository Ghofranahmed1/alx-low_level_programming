#include "main.h"
#include <stdio.h>
/**
 *_strchr - function that locates a character in a string
 *@s: a pointer input
 *@c: a character input
 *Return: return a pointer or NULL
 */

char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
