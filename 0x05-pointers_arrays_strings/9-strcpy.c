#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string inculding the \0 byte from stc to dest
 * @dest: pointer to the destination buffer
 * @src: pointer to the srouce string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}
