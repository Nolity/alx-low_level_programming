#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be used from src.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

    /* Calculate the length of the destination string*/
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append the source string to the destination string, using at most n bytes*/
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Add a terminating null byte*/
	dest[dest_len + i] = '\0';

	return (dest);
}
