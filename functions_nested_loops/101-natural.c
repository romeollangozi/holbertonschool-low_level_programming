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
int a = 1;
int b = 0;
int t;
for (i = 0; i <= 50; i++)
{
t = b;
b = b + a;
a = t;
printf("%d\n");
}


return (0);
}
