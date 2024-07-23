#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for dog_t
 * @d: pointer to the dog_t to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
