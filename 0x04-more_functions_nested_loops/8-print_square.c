#include <stdio.h>
#include "main.h"

/**
 * print_square - prints squares
 * @size: parameter
 * Return: nothing
 */

void print_square(int size)
{
	int wid1, wid2;

	if (size > 0)
	{
		for (wid1 = 0; wid2 < size; wid1++)
		{
			for (wid2 = 0; wid2 < (size - 1); wid2++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

