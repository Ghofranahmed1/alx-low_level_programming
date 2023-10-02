#include <stdio.h>
/**
 * main -  program that prints its name
 * @argc: number of element
 * *argv:a pointer contain a strings
 * Return: return 0 always
*/


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
