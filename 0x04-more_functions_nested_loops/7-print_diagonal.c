#include "main.h"

/**
 *print_diagonal - print a  diagonal line on the terminal.
 *@n: is an integer input
 *Return: void means nothing
 */

void print_diagonal(int n)
{
	int i;
	int j;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
