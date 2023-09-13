#include "main.h"
#include <stdio.h>

/**
*print alphabet - Make the alphabet
*
* print alphabet
*
*Return: void
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);

	}
	_putchar('\n');
}
