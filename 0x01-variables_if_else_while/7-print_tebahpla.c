#include <stdio.h>
/**
 * main - A program that will print the alphabet in reverse
 * Return: 0 (Successful)
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{/* if condition true put the following*/
putchar(ch);
}
putchar('\n');
return (0);
}
