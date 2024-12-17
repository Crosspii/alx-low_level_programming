#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in the string
 * @s: Pointer to the string
 * @c: the character to locate
 * Return: Pointer the first occurrence of the char 'c' in the string 's'
 * Or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
