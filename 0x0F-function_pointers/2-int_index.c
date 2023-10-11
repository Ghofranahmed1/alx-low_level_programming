#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @array: array of intger
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare value
 * Return: intger
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	for (; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) == 0)
			continue;
		else if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}


