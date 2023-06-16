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

printf("Size of char size= %zu", sizeof(a));
printf("\nSize of int size= %zu", sizeof(b));
printf("\nSize of long int size= %zu", sizeof(c));
printf("\nSize of long long int= %zu", sizeof(d));
printf("\nSize of float= %zu", sizeof(e));

return (0);
}
