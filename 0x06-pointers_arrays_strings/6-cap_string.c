#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * cap_string - Capitalizes all words of a string
 * @s: pointer to the string
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
	int i = 0;
	bool capitalize_next = true;
	char separators[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (capitalize_next && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			capitalize_next = false;
		}
		else
		{
			int j;

			for (j = 0; separators[j] != '\0'; j++)
			{
				if (s[i] == separators[j])
				{
					capitalize_next = true;
					break;
				}
			}
		}
		if (s[i] == '\'')
		{
			capitalize_next = true;
		}

		i++;
	}

	return (s);
}
