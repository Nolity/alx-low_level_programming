#include <stdio.h>

/**
 * main - A program that prints its own name.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	/* Loop through each character of argv[0] and print it */
	for (i = 0; argv[0][i] != '\0'; i++)
	{
		putchar(argv[0][i]);
	}

	putchar('\n');

	return (0);
}
