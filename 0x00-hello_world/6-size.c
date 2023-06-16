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

printf("Size of a char= %zu byte(s)", sizeof(a));
printf("\nSize of a int= %zu byte(s)", sizeof(b));
printf("\nSize of a long int= %zu byte(s)", sizeof(c));
printf("\nSize of a long long int= %zu byte(s)", sizeof(d));
printf("\nSize of a float= %zu byte(s)", sizeof(e));

return (0);
}
