#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @char - character as  input
 * Return - character
 */

char *cap_string(char *t)
{
char *temp = t;

while (*t == ',' || *t == ';' || *t == '.' || *t == '!' || *t == '?'|| *t == '"' || *t == ')' || *t == '(' || *t == '{' || *t == '}' || *t == ' ' || *t == '\n')
{
t++;
if (*t >= 'a' && *t <= 'z')
{
*t -= 32;
t++;
}
}
return (temp);
}

