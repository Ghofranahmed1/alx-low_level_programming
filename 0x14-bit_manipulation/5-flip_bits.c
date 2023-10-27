#include "main.h"

/**
 * flip_bits - unction that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return : number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int binary;

	binary = n ^ m;
	while (binary)
	{
		if ((binary  & 1) == 1)
		{
			bits++;
		}
		binary = binary >> 1;
	}
	return (bits);
}
