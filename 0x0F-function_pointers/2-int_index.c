#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Searches for an interger in an array using a comparison funciton
 * @array: the array of integers.
 * @size: the number of elements in the array.
 * @cmp: a pointer to the function to be used to compate values.
 * Return: the index of the first elemen where cmp does not return 0
 * if no element matches or if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
