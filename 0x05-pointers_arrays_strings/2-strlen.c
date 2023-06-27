#include "main.h"
/**
 * strlen - a function that returns the length of a string.
 * @s : the string to calculate the length of.
 * Return : length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
