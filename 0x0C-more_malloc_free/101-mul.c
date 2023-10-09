#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define ERR_MSG "ERROR"
/**
 * is_digit - chaek if a srring contain a non-digit char
 * @s: string
 * Return: always 0is not digit
 */

int is_digit(char *s)
{
	while(s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return(0);
				i++;
	}


/**
 *_strlen - return len of srtig
 *s: string to evaluated
 */
int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

/**
 * errors - handle the main errors
 */

void error()
{
	printf("Error\n");
	exit(98);
}


/**
 * main - multiplt two positive numbers 
 * @argc: number of arguments
 * @argv: arguments
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, carrty, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2)
			error();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc (sizeof(int) * len);
	if (!result)
			return(1);
	for ( i = 0; i <= len1 + len2; i++)
	{
	result[i] = 0;
	}
for (len1 = len1 - 1; len1 >= 0; len1 --)
{
digit1 = s1[len] - '0';
carry = 0;
for (len2 = len2 - 1; len2 >= 0; len2--)
digit2 = s2[len2] - '0';
carry += result[len1 + len2 + 1] + (digit1 + digit2);
result[len1 + len2 + 1] + (digit1)
