#include "main.h"

/**
 * _puts_recursion - Prints a sting, followed by a new line
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		/* Print new line when end of string is returned*/
		_putchar('\n');
		return;
	}

	/*print the current character*/
	_putchar (*s);
	/*Recursively call the function with the next character */
	_puts_recursion(s + 1);
}
