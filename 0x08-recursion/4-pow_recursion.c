#include "main.h"
/**
 * _pow_recursion -fun returns the value of x raised to the power of y
 * @x: an intger input
 * @y: an intger input
 * Return: return an intger
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}

