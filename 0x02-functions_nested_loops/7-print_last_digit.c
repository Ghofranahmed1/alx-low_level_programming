#include "main.h"

/**
 * print_last_digit - main
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */
int print_last_digit(int r)
{
int n;

if (r >= 0)
{
n = (r % 10);
_putchar(n + '0');
}
else
{
n = -1 * (r % 10);
_putchar(n + '0');
}

return (n);
}
