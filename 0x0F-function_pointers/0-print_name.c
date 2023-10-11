#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name -  function that prints a name.
 * @name: a pointer to name
 * @f: a pointer ot function
 * Return: return nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
