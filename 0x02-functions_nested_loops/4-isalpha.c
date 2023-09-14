#include "main.h"

/**
 * _isalpha - check main.h
 *
 * Return: 1 if is lowercase and uppercase
 */

int _isalpha(int c)
{
	if (( c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
