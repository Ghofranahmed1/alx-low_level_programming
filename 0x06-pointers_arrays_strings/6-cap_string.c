#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @char - character as  input
 * Return - character
 */

char *cap_string(char *t)
{
char *temp = t;
int new = 1;

while (*t)
{
if (*t == ',' || *t == ';' || *t == '.' || *t == '!' || *t == '?'|| *t == '"' || *t == ')' || *t == '(' || *t == '{' || *t == '}' || *t == ' ' || *t == '\n' || *t == '\t')
{
new = 1;
}
else if (new && *t <= 'a' && *t >= 'z')
{
*t -= 32;
new = 0;
}
else 
{
new = 0;
}
}
return (temp);
}
