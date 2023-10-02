#include<stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the number of arguements you passed into it
 * @argc: An argument counter
 * @argv: An argument values
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, num1, num2;

	if (argc != 3)
	{
		printf("error\n");
	return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		i = num1 * num2;
		printf("%d\n", i);
	return (0);
	}
}
