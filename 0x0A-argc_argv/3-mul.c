#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}

/**
 * multiply - Multiplies two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Result of multiplication
 */
int multiply(int a, int b)
{
	return (a * b);
}

