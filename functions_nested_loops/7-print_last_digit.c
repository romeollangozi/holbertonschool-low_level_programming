#include "main.h"
/**
 * print_last_digit - it takes an argument of
 * type int and returns its last digit
 * @n: integer
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
int last = n % 10;
_putchar('0' + last); 
return (last);
}
