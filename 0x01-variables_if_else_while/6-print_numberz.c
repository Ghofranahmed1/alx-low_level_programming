#include <stdio.h>

/**
*main - Entry point
*
*this program print from 0-10 use putchat fun
*
*Return: Always 0 (success)
*/

int i ;

int main(void)
{
	for (i = 0; i < 10; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
