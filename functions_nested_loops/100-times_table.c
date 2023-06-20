#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: n number of tables
 */
void print_times_table(int n)
{
int i, j;
int sum;
if (n < 15 && n >= 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
sum = i * j;
if (j == n)
printf("%d", sum);
else if (i * (j + 1) < 10)
printf("%d,   ", sum);
else if (i * (j + 1) >= 100)
printf("%d, ", sum);
else
printf("%d,  ", sum);
}
printf("\n");
}
}
}
