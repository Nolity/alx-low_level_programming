#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number to find the square root of
 *
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		/* Return -1 if n is negative */
		return (-1);
	if (n == 0 || n == 1)
		/* Return n if n is 0 or 1 */
		return (n);

	/*Call the helper function*/
	return (sqrt_helper(n, 1, n / 2));
}
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
	int mid, square;

	if (start <= end)
	{
		mid = (start + end) / 2;
		square = mid * mid;

		if (square == n)
			/* Return mid if mid^2 equals n */
			return (mid);

		else if (square < n)

			/* Search the upper half */
			return (sqrt_helper(n, mid + 1, end));

		else
			/* Search the lower half */
			return (sqrt_helper(n, start, mid - 1));
	}

	/* Return the previous value of end as the square root */
	return (end);
}
