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

printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
