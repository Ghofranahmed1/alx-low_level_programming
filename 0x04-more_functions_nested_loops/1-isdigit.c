#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 * @c: An input integer
 * Return: 1 if c is a digit or 0 otherwise
*/

int _isdigit(int c)
{

char i;
int check = 0;

for (i = '0'; i <= '9'; i++)
{
if (c == i)
{
check = 1;
break;
}
}
return (check);
}


