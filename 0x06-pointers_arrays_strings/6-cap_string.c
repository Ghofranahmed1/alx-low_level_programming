#include "main.h"

int checker(char c);
/**
 * cap_string - function that capitalizes all words of a string.
 * @t: An input string to capitalize letters.
 * Return: pointer to t
 */

char *cap_string(char *t)
{
char *temp = t;
int i;

while (t[i])
{
if (i == 0 && (t[i] >= 'a' && t[i] <= 'z'))
{
t[i] -= 32;
}
if (checker(t[i]) && (t[i + 1] >= 'a' && t[i + 1] <= 'z'))
{
t[i + 1] -= 32;
i++
}
}
return (temp);
}
/**
 * checker - Separators of words: space, tabulation, new line,
 * ,, ;, ., !, ?, ", (, ), {, and }
 * @c: an input character
 * Return: 1 if seperator, 0 otherwise
 */
int checker(char c)
{
int i;
char seperators[13] = {',', '\t', '\n', ',', ';', '.', '!',
'?', '"', '(', ')', '{', '}'};

for (i = 0; i < 13; i++)
{
if (c == seperators[i])
{
return (1);
}
}
return (0);
}
