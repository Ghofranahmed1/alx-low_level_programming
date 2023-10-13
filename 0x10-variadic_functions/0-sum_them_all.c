#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all -  function that returns the sum of all its parameters
 * @n: numer of sum's intger
 * Return: the result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0,sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
	sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
