#include "main.h"

/**
 * _isalpha - check main.h
 *
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 *
 * Return: 1 if is lowercase and uppercase
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
