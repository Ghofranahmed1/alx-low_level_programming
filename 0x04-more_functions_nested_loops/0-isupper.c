#include "main.h"

/**
*int_isupper function - check upper cases
*
*Return: 0 or 1 
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
