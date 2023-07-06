#include "main.h"

/**
 * sqrt_helper - Helper function to calculate the square root recursively
 * @n: The number to find the square root of
 * @start: The starting point for the search
 * @end: The ending point for the search
 *
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int start, int end)
{
	if (start > end)
		return (-1);
	/* Return -1 if n does not have a natural square root */

	int mid = (start + end) / 2;
	int square = mid * mid;

	if (square == n)
		return (mid);
	/* Return mid if mid^2 equals n */

	else if (square > n)
		return (sqrt_helper(n, start, mid - 1));
	/* Search the lower half */

	else
		return (sqrt_helper(n, mid + 1, end));
	/* Search the upper half */
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1)
			/* Return -1 if n is negative */

			return (sqrt_helper(n, 0, n));
	/* Call the helper function */
}
}
