#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function given as a prameter on each element
 * of an array.
 * @array: the array of integers.
 * @size: the size of the array.
 * @action: A pointer to the nction to be used on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
