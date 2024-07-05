#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: an integer less than, match , or greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *S2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
