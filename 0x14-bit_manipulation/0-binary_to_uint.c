#include "main.h"
/**
 * binary_to_uint - unction that converts a binary number to an un int
 * @b: a pointer to a string of 0 and 1 chars
 * Return:  the converted numbe
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i = 0;

	if (b == NULL)
		return (0);

	for ( i = 0; b[i] != '\0'; i++)
	{
		if (b[i++] != '0' && b[i++] != '1')
			return (0);
	}

		for (i = 0; b[i] != '\0'; i++)
		{
			num <<= 1;
			if (b[i] == '1')
				num += 1;
		}
		return (num);
}
