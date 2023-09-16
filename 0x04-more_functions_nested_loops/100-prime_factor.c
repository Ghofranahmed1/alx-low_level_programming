#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
unsigned long int n = 612852475143;
int i = 2;

while (i * i <= n)
{
if (n % i != 0)
{
i += 1;
}
else
{
n /= i;
}
}
printf("%lu\n", n);

return (0);
}
