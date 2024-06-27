#include <stdio.h>

/**
 * _islower - checks if its lower case
 * @c: the character to be checked
 * Return: 1 for true 0 for otherwise
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
