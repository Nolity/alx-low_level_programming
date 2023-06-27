#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (; longi > 0; longi--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
