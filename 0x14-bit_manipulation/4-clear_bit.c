#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - This prog sets the value of a bit to 0 at a given index
 * @n: parameter
 * @index: index
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int binary;

	if (index > sizeof(n) * 8)
		return (-1);
	binary = ~(1 << index);
	*n = *n & binary;
	return (1);
}

