#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	/*
	 * 00000000 00000000 00000000 00000001.
	 */
	unsigned int x = 1;
	char *c;
	/*
	 * When we do (char*)&x, we’re typecasting the address
	 *  of x to a char pointer. This tells the compiler
	 *  to treat the address of x as if it’s the address of a char
	 *Since c is a char pointer, it’s pointing to a single byte.
	 */
	c = (char *) &x;
	/*
	 * (int)*c: This is casting that value to an integer.
	 */

	return ((int)*c);
}
