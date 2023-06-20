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
long int b = 1;
long int t;
printf("1, ");
for (i = 0; i <= 48; i++)
{
t = b;
b = b + a;
a = t;
if (i != 48)
printf("%li, ", b);
else
printf("%li", b);
}
printf("\n");
return (0);
}
