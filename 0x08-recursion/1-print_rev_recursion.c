#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse
 * @s: The string that will be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	/* Recursively call the function with the next character*/
	_print_rev_recursion(s + 1);
	/* Print the current character after the recursive call*/
	_putchar(*s);
}
