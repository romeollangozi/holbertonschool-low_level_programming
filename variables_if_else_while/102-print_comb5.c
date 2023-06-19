#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int i, j, k, m;

for (i = 48; i < 58; i++)
{
for (j = 48; j < 58 ; j++)
{

for (k = 48; k < 58; k++)
{
for (m = 48; m < 58; m++)
{
if ((i + j < m + k))
{
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(m);
if (i + j + k + m <= 226)
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
