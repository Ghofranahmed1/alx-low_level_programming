#include "main.h"

/**
* _puts_recursion - function that prints a string, followed by a new line.
* @s: a input pointer .
* Return: return nothing.
*/

void _puts_recursion(char *s)
{
int i = 0;

while (*s != '\0')
{
_putchar(s[i]);
s++;
}
if (*s == '\0')
_putchar('\n');
}
