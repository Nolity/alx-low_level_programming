#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string `dest`.
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/*Calculate the length of the destination string*/
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append the source string to the destination string*/
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/*Add a terminating null byte*/
	dest[dest_len + i] = '\0';

	return (dest);
}
