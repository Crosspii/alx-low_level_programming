#include "dog.h"
#include <stdio.h>

/**
 * print_dog - printsa struct dog
 * @d: the struct to be printed
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %s\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
