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
long int a = 1;
long int b = 0;
long int t;
for (i = 0; i <= 50; i++)
{
t = b;
b = b + a;
a = t;
printf("%li\n", b);
}


return (0);
}
