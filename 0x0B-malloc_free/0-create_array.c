#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initialized it
 * with a specific char
 * @size: the size of the array
 * @c: the char to initilaize the array with
 * Return: Poniter to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
