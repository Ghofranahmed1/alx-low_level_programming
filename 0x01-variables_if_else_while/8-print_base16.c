#include <stdio.h>

/**
*main - Entry point
*
*program print 16's alphabet bases
*
*Return: Always 0 (success)
*/

int main(void)
{
	char c;
        int i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	for (c = 'a'; c <= 'f'; c++)
	putchar(c);
        putchar('\n');
	
return (0);
}
