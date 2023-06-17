#include <stdio.h>

/**
 * main - A program that will print the alphabet in lower case
 * Return: 0 (Successful)
 */
int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{/* if condition true put the following"*/
	putchar(ch);
}
char c = 'A';
for (c = 'A'; c <= 'Z'; c++)
{/* if condition true put the following"*/
	putchar(c);
}
putchar('\n');
return (0);
}
