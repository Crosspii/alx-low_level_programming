#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers containing values from min to max
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 * Return: Pointer to the newly created array, or NULL if min > max or
 * if it fails like min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
