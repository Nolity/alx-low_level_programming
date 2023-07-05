#include "main.h"

/**
 * _pow_recursion - calculates he value of x rasied to the power of y
 * @x: Base of value
 * @y: Exponent value
 *
 * Return: Results of x raised to the power of y, or -1 if an errror occurs
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		/* Return -1 to indicate error if v is negative */
		return (-1);
	if (y == 0)
		/*Return 1 for any number raised to the power of 0 */
		return (1);

	/* Calculate the power recursively */
	return (x * _pow_recursion(x, y - 1));
}
