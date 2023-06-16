#include <stdio.h>
/**
 * main - Program prints the size of various cpu types
 * Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %zu byte(s)", (unsigned long)sizeof(a));
printf("\nSize of an int: %zu byte(s)", (unsigned long)sizeof(b));
printf("\nSize of a long int: %zu byte(s)", (unsigned long)sizeof(c));
printf("\nSize of a long long int: %zu byte(s)", (unsigned long)sizeof(d));
printf("\nSize of a float: %zu byte(s)", (unsigned long)sizeof(e));
return (0);
}
