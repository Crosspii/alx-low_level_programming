#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills memory with a constant byte
 *@s: pointer to the memory area to be filled
 *@b: the constant byte to fill the memeory area with
 *@n: the number of bytes to be filled
 * Return: Pointer to the memoery area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
