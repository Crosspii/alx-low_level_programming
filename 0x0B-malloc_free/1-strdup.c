#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly aloocated space in memory,
 * which contains a copy of the string given
 * @str: the string to duplicate.
 * Return: Pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
		dup[len] = '\0';
	}

	return (dup);
}
