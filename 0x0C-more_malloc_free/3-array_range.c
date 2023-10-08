#include <stdlib.h>
#include "main.h"

/**
 *  array_range - A function that creates an array of integers
 * @min: minimum intger
 * @max: maximum intger
 * Return: return Apointer to ate array
 */
int *array_range(int min, int max)
{
	int *array;
	int len = (max - min) + 1;
	int i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) *  len);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		array[i] = min++;
	}
	return (array);
}
