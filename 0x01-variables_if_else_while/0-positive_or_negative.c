#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that assigns a random number to the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/*if the number is greater than zero*/
if (n > 0)
{/*if condition true then print the following*/
	printf("%d is postive\n", n);
} else if (n == 0)
{/*if condition true the print the following*/
	printf("%d is zero\n", n);
} else
{/*if condition true the print the following*/
	printf("%d is negative\n", n);
}
return (0);
}
