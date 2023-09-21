#include "main.h"

/**
 * reverse_array - a function reverses the content of an array of integers.
 * @a: an input pointer
 * @n: an input integer
 * Return: The difference s1 - s2
 */

void reverse_array(int *a, int n)
{
int k, i = 0;

while (i <= n--)
{
k = a[i];
a[i++] = a[n];
a[n] = k;
}
}
