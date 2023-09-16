#include "main.h"

/**
 * more_numbers - print out num from 0-14 10 times
 * followed by new line
 * Return: always 0
 */

void more_numbers(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 14; j++)
{
{
if (i > 9)
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
}
_putchar('\n');
}
}
