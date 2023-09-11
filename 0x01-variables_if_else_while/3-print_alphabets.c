#include <stdio.h>

/**
*main - Entry point 
*
*this program write alphabet is lower and biger case
*
*Return: Always 0 (success)
*/

int main(void)
{
	char c;
	for (c = 'a'; c = 'b'; c++)
		putchar(c);
	for (c = 'A'; c = 'B'; c++)
		putchar(c);
	putchar('\n');

	return(0);
}
