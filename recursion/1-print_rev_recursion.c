#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - function that prints
 * a string, followed by a new line.
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
