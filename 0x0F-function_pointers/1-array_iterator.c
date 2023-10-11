#include <stddef.h>
/**
 * array_iterator - function that executes a function
 * @array: array of intger
 * @size:  size of the array
 * @action: pointer to the function you need to use
 * Return: return nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL || array == NULL)

		return;

	for (; i < size; i++)
		action(array[i]);
}
