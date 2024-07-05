#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string wo the null byte
 * @s: pointer to the string
 * Return: length of the string wo the null byte
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * _strncat - concatenates two strings unsgin at most n bytes from src
 * @dest: pointer to the destination string
 * @src: pointer to the srouce string
 * @n: maximum number of bytes to use from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
