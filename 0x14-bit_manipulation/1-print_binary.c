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
	/** make sure to print the binary number without leading zeros */
	int flag = 0; 

	if (n == 0)
		printf ("0");

	binary = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	while (binary)
	{
		if ((n & binary) == binary)
		{
			printf("1");
			flag = 1;
		}
		else if (flag)
			printf("0");
		binary = binary >> 1;
	}
}
