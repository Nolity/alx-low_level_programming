#include "main.h"

/**
 * _isdigit - checks if the character is a digit or not
 * @c: tested character
 * Return: 1 if digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
