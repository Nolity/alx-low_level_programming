#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Return -1 if n is negative */

	if (n == 0 || n == 1)
		return (n); /* Return n if n is 0 or 1 */

	return (sqrt_helper(n, 1, n / 2));  /* Call the helper function */
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
			return (mid);  /* Return mid if mid^2 equals n */
		else if (square < n)
			return (sqrt_helper(n, mid + 1, end)); /* Search the upper half */
		else
			return (sqrt_helper(n, start, mid - 1)); /* Search the lower half */
	}

	return (end); /* Return the previous value of end as the square root */
}
