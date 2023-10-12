#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all -  function that returns the sum of all its parameters
 * @n: numer of sum's intger
 * Return: the result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0,sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	unsigned int x = va_arg(args, int);

	sum += x;
	}
	va_end(args);
	return (sum);
}
