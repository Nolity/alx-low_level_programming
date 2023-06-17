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
	int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
/*if the lastDigit is greater than 5*/
if (lastDigit > 5)
{/*if condition true then print the following*/
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
} else if (lastDigit == 0)
{/*if condition true the print the following*/
	printf("Last digit of %d is %d and is 0\n", n, lastDigit);
} else
{/*if condition true the print the following*/
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
return (0);
}
