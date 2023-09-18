#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */

void puts2(char *str)
{
int i = 0, j;

while (str[i] != '\0')
{
i++;
}
i -= 1;
for (j = 0; j <= i; j += 2)
{
_putchar(str[j]);
}
_putchar('\n');
}
