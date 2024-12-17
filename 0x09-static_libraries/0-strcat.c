#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string without the null byte
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
 * _strcat - concatenates two strings
 * @dest: pointer to the destination stirng
 * @src: pointer to the source string
 * Return: pointer to the resulitng string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i = 0;

	/* append stc to dest */
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
