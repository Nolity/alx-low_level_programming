#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the resulting string.
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		int is_lower = (str[i] >= 'a' && str[i] <= 'z');
		int is_upper = (str[i] >= 'A' && str[i] <= 'Z');

		if (is_lower || is_upper)
		{
			int diff = is_lower ? 'a' : 'A';

			str[i] = (str[i] - diff + 13) % 26 + diff;
		}
		i++;
}

	return (str);
}
