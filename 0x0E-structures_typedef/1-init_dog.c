#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable of type srtuct dog
 * @d: pointer to the srtuct dog to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
