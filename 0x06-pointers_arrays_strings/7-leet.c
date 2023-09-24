#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @t: an input string to encode
 * Return: An encode string
 */
char *leet(char *t)
{
int j, i;

char letter[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

while (t[i])
{
for (j = 0; j < 10; j++)
{
if (letter[j] == t[i])
{
t[i] = num[j];
}
}
i++;
}
return (t);
}
