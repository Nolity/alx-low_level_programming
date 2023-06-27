#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1; /* Sign of the number */
	int result = 0;
	int i = 0;

	/* Check for a negative sign */
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	/* Iterate through the string and convert to integer */
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			/* Multiply the result by 10 and add the current digit */
			result = (result * 10) + (s[i] - '0');
		}
		else if (result != 0)
		{
			/* Break if a non-digit character is encountered after parsing a number */
			break;
		}
		i++;
	}

	return (result * sign);
}
