#include <stdio.h>
#include <stdlib.h>

int main ( int ar, char **argv)
{
	char *prompt = "(starts)$";
	char *lineptr;
	size_t n = 0;

	printf("%s ", prompt);
	getline(&lineptr, &n, stdin);
	printf("%s/n", lineptr);
	free (lineptr);
	return (0);
}
