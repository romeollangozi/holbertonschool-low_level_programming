#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int i, j, k, m;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10 ; j++)
{

for (k = 0; k < 10; k++)
{
for (m = 0; m < 10; m++)
{
if (i <= k && j < m)
{
putchar('0' + i);
putchar('0' + j);
putchar(' ');
putchar('0' + k);
putchar('0' + m);
if (i + j + k + m < 35)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
