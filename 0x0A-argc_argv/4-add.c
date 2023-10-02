#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - A program that multiplies two numbers
 * @argc: The arguments' counter
 * @argv: The arguments' values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int result = 0, num, i;

while (argc-- > 1)
{
for (i = 0; argv[argc][i]; i++)
{
if (!(isdigit(argv[argc][i])))
{
printf("Error\n");
return (1);
}
}
		num = atoi(argv[argc]);
			result += num;
	}
	printf("%d\n", result);
	return (0);
}
