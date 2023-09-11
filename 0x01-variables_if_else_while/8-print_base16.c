#include <stdio.h>

/**
*main - Entry point
*
*program print 16's alphabet bases
*
*Return: Always 0 (success)
*/

char c;
int i;

int main(void)
{
	for (i = '0'; i <= '9'; i++)
	putchar(i);
	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
        putchar('\n');
	
	return (0);
}
