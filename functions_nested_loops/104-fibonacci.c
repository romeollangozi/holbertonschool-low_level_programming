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
int n = 10;
printf("1, 2, ");
for (i = 0; i <= 98; i++)
{
t = b;
b = b + a;
a = t;
if (b >= 10)
{
while (b / n != 1 && b >= 10)
n = n * 10;
}
if (b / n == 1 || b / n == 2)
printf("%li, ", b);
n = 10;
}
printf("\n");
return (0);
}
