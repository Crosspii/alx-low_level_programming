#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Computes the length of a srting
 * @s: the string
 * Return: The length of the string
 */
static int _strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

/**
 * _strcpy - Copies a string to a new memory location
 * @dest: the destination buffer
 * @src: the source string
 * Return: Pointer to the destination buffer
 */
static char *_strcpy(char *dest, const char *src)
{
	char *start = dest;

	while ((*dest++ = *src++))
		;
	return (start);
}

/**
 * new_dog - Creates a new dog_t
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: pointer to the new dog_t or null if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_ln, *owner_ln;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}

	name_ln = _strlen(name);
	owner_ln = _strlen(owner);

	d->name = (char *)malloc(name_len + 1);
	if (d->name == NULL)
	{
		return (NULL);
	}

	d->owner = (char *)malloc(owner_len + 1);
	if (d->owner == NULL)
	{
		return (NULL);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
