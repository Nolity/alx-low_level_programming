#include "main.h"

/**
 * _isupper - checks if the character is uppercased or not
 * @c: character to be tested
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
