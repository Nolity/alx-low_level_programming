#include <stdio.h>
/**
 * main - Program prints the size of various types
 * Return: 0
 */
int main(void)
{
char one;
int two;
long int three;
long long int four;
float five;
printf("Size of char size= %zu", sizeof(one));
printf("\nSize of int size= %zu", sizeof(two));
printf("\nSize of long int size= %zu", sizeof(three));
printf("\nSize of long long int= %zu", sizeof(four));
printf("\nSize of float= %zu", sizeof(five));

return (0);
}
