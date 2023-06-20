#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
long int a = 1;
long int b = 1;
long int t;
long int sum;
while (b <= 4000000)
{
t = b;
b = b + a;
a = t;
if (t % 2)
sum = sum + t;
}
printf("%li \n", sum);
return (0);
}
