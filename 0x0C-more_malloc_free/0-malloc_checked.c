#include <stdio.h>
#include "main.h"
/**
 *malloc_checked - function that allocates memory using malloc
 *@b: unsigned int
 *RETURN: return a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *s;
	
	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
