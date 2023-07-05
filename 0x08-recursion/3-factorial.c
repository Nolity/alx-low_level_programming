#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number given
 *
 * Return:The factorial of the number, or -1 if an error occurs
 */
int factorial(int n)
{
	if (n < 0)
		/* Return -1 to indicate an error if n is negative*/
		return (-1);

	if (n == 0)
		/* Return 1 for the factorial of 0*/
		return (1);
	/*Calculate the factorial recursively*/
	return (n * factorial(n - 1));
}
