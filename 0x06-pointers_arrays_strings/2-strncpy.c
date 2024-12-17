#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copie up to n characters frmo the string pointed to by src to dst
 * @dest: pointer to the destination
 * @src: pointer to the srouce string
 * @n: maximum number of characters to copy
 * Return: pointer to the destinations string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* copy character from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
