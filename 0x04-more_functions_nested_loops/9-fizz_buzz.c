#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - program that prints the numbers from 1 to 100
 * Return: Always 0
 */

int _putchar(char c);

int main(void)
{
int n;

for (n = 1; n < 100; n++)
{
if (n % 3 == 0 && n % 5 != 0)
{
printf("Fizz ");
}
else if (n % 3 != 0 && n % 5 == 0)
{
printf("Buzz ");
}
else if (n % 3 == 0 && n % 5 == 0)
{
	printf("FizzBuzz ");
}
else
{
printf("%d ", n);
}
}
printf("Buzz\n");

return (0);
}


