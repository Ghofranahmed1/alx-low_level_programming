#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
		for (b = '0'; b <= '9'; b++)
		{
			putchar(a);
		putchar(',');
			putchar(' ');
		putchar(b);
	}
	putchar('\n');

		return (0);
}

