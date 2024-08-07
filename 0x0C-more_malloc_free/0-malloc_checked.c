#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 * Return: Pointer to the allocated memory or 98 if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
