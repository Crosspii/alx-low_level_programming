#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: pointer to the string
 * Return: length of the string
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
 * puts_half - prints half of a string followed by a new line
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int i;
	int length = _strlen(str);
	int half_length = (length - 1) / 2;
	int start_index = (length % 2 == 0) ? length / 2 : half_length;

	for (i = start_index; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
