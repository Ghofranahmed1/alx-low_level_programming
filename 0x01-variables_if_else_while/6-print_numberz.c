#include <stdio.h>

/**
*main - Entry point
*
*this program print from 0-10 use putchat fun
*
*Return: Always 0 (success)
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
