#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: Pointer to the main string to be searched
 * @needle: Pointer to the substring to be located
 * Return: Pointer to the beginning of the located substring
 * of null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
