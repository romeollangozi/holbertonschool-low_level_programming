#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
long int i = 1, j = 1, sum = 0;
while (i < 4000000)
{
i = i + j;
j = i - j;
if (i % 2 == 0)
sum += i;
}
printf("%li \n", sum);
return (0);
}
