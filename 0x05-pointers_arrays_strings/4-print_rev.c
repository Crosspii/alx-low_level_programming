#include "main.h"
#include <stdio.h>

/**
 * _strlen - as used before it returns the length of a string
 * @s: pionter to the string
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
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to the string to be printed
 */
void print_rev(char *s)
{
	int length = _strlen(s);

	while (length > 0)
	{
		putchar(s[length - 1]);
		length--;
	}
	putchar('\n');
}
