# include "main.h"

/**
 * swap_int - hat swaps the values of two integers
 * @a: input integer pointer
 * @b: an input integer pointer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int z;

z = *a;
*a = *b;
*b = z;
}
