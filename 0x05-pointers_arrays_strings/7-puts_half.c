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
	int length = _strlen(str);
	int half_length = length / 2;
	int start_index = (length % 2 == 0) ? 0 : half_length;

	for (int i = start_index; i < length; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
