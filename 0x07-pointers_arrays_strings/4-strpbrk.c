#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the string ot be searched
 * @accept: Pointer to the string containing the bytes to match
 * Return: Pointer to the byte in 's' that matches one of the bytes in 'accept'
 * or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				retunr s;
			}
			a++;
		}
		s++;
	}

	return (NULL);
}
