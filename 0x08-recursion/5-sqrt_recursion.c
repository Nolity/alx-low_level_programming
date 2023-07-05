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
