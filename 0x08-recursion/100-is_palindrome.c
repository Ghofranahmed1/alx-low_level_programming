#include "main.h"
#include <stdio.h>

/**
 *_srtlen_recursion - a fun find thr len og string
 *@s: an input string
 *Return: return length of a string
 */

int _srtlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_srtlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - a fun check if it is palindrome
 * @s: an input string
 * Retur: 1 if is string is a palindrome or 0 in otherwise
 */

int is_palindrome(char *s)
{
	int len;

	len = _srtlen_recursion(s);
	if (len <= 1)
		return (1);
	return (helper_palindrome(s, len));
}

/**
 * helper_palindrome - fun with a revesed string
 * @s: an input string
 * @len: an input intger (length of the srting)
 * Return: return 0 or 1
 */

int helper_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
		return (helper_palindrome(s + 1, len - 2));
	return (0);
}
