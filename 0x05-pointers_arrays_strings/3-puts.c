# include "main.h"

/**
 * _puts -  function that prints a string, followed by a new line
 * @str: an character input
 * Return: nothing
 */

void _puts(char *str)
{
int i = 0;

while (str[i] != 0)
{
if (str[i] != 0)
{
_putchar(str[i]);
}
else
{
_putchar('\n');
}
i++;
}
}
