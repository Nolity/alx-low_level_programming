#include <stdio.h>
/**
 * main - A program that will put (char) all single digit numbers
 * Return: 0 (Successful)
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{/*if condition is true put*/
putchar(n + '0');
}
putchar('\n');
return (0);
}
