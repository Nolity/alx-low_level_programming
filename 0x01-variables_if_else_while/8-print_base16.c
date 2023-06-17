#include <stdio.h>
/**
 * main - A program that will put all the numbers of base16
 * Return: 0 (Successful)
 */
int main(void)
{
int n;
char ch;
for (n = '0'; n <= '9'; n++)
{/* if condition true put the following"*/
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{/* if condition true put the following*/
putchar(ch);
}
putchar('\n');
return (0);
}
