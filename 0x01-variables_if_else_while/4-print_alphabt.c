#include <stdio.h>

/**
 * main - A program that will print the alphabet excluding 'e' + 'q'
 * Return: 0 (Successful)
 */
int main(void)
{
	char letter = 'a';
while (letter <= 'z')
{
if (letter != 'q' && letter != 'e')
/*if contidion true then put the following*/
	putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
