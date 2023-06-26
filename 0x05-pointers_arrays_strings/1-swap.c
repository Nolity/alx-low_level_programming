#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: integars to swap
 * @b: integars to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
