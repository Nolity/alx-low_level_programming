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

printf("Size of a char size= %zu", sizeof(a));
printf("\nSize of a int size= %zu", sizeof(b));
printf("\nSize of a long int size= %zu", sizeof(c));
printf("\nSize of a long long int= %zu", sizeof(d));
printf("\nSize of a float= %zu", sizeof(e));

return (0);
}
