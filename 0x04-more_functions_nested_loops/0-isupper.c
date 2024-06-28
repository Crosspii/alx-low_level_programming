#include <stdio.h>

/**
 * _isupper - chekcs is a cahr is uppercase
 * @c: the caracter to check
 * Return: 1 if c is uppercae 0 if else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
