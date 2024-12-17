#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Pointer to the string of characters to the match
 * Return: The number of bytes in the initial segment of 's' which cnosist
 * only of bytes from 'accept'
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				count++;
				break;
			}
		}
		if (*a == '\0')
		{
			return (count);
		}
		s++;
	}
	return (count);
}
