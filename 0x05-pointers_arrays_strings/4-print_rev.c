# include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: an character input
 * Return: nothing
 */

void print_rev(char *s)
{
int i = s['\0'];

while (s[i] >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
