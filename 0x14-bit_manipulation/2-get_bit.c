#include"main.h"

/**
 * get_bit - prog returns the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int check, divisor;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	/* this give me a binary num that have only 1 in index position */
	divisor = 1 << index;
	/*
	 * this sum opetetor if the index in n is the
	 * same as it in divisor the result will be 1 and all other bits
	 * will be 0
	 */
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
