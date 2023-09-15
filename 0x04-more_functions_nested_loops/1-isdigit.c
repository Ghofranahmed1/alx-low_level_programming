#include "main.h"

/**
*int _isdigit - find digits 
*
* Return: zeros or ones 
*/

int _isdigit(int c)
{

char i;
int check = 0;

for (i = '0'; i <= '9'; i++)
    {
	    if (c == i)
	    {
		    check = 1;
		    break;
	    }
    }
return (check);
}


