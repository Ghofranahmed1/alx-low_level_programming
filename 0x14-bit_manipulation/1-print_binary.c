#include "main.h"

/**
 * print_binary -  function that prints the binary representation
 * of a number.
 * @ n: number to be converted 
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int binary;

	if (n == 0)
		printf ("0");

	binary = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	while (binary)
	{
		if ((n & binary) == binary)
			printf("1");
		else
			printf("0");
		binary = binary >> 1;
	}
}
