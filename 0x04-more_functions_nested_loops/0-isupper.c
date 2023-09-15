#include "main.h"
#include "stdio.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
*/

int _isupper(int c)
{
	char i;
	int check = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			check = 1;
			break;
		}
		}

return (check);
}
