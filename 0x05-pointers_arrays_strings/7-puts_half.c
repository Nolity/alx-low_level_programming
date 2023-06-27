#include "main.h"

/**
 * _strlen - Computes the length of a string
 * @str: The string
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;
return (length);
}

/**
 * puts_half - Prints half of a string
 * @str: The string
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int start_index, i;

	if (length % 2 == 0)
		start_index = length / 2;
	else
		start_index = (length - 1) / 2 + 1;
	for (i = start_index; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
