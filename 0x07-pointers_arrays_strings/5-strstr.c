#include "main.h"

/**
 * _strstr - Locates a substring in a string
 * @haystack: Pointer to the string to be searched
 * @needle: Pointer to the substring to be located
 *
 * Return: Pointer to the beginning of the located substring, or 0 if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (0);
}
