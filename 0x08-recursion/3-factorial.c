#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: an input intger
 * Return: return an intger
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		{
		return (1);
		}
		return (n * factorial(n - 1));
	return (0);
}
