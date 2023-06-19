#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
for (i = 0; i < 10; i++)
putchar(numbers[i]);
putchar('\n');
return (0);
}
