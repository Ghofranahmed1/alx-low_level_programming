#include "main.h"
#include "stdio.h"

/**
*int_isupper function - check upper cases
*
* @c: an input character
*
*Return: 0 or 1 if c is uppercase
*/

int _isupper(int c)
{
	char i;
	int check = 0;

	for (i = 'A'; i <= 'z'; i++)
	{
		if (c == i)
		{
			check = 1;
		}
		}

return (check);
}
