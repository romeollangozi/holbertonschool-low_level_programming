#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i;
unsigned long long int a = 1;
unsigned long long int b = 2;
unsigned long long int t;
int n = 10;
printf("1, 2, ");
for (i = 0; i <= 94; i++)
{
t = b;
b = b + a;
a = t;
if (i != 98)
printf("%llu, ", b);
else
printf("%llu", b);
}
printf("\n");
return (0);
}
