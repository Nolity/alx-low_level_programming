#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str)
{
	int i = 0;

	/* Flag to indicate the next character should be capitalized*/
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
		/* Check if the current character is a separator*/
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			capitalize_next = 1;
		}

		/* Check if the current character is a lowercase letter*/
		else if (str[i] >= 'a' && str[i] <= 'z' && capitalize_next)
		{
			str[i] = str[i] - 32; /* Convert lowercase to uppercase*/
			capitalize_next = 0;
		}
		else
		{
			capitalize_next = 0;
		}

		i++;
	}
	return (str);
}
