#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into leet speak
 * @s: pointer to the string
 * Return: pointer to the resulting encoded string
 */
char *leet(char *s)
{
	char *ptr = s;
	char *leet_chars = "4437101";

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = leet_chars[*ptr - 'a'];
		}
		else if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr = leet_chars[*ptr - 'A'];
		}
		ptr++;
	}

	return (s);
}
